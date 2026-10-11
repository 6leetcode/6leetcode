/* ==========================================================================
   6leetcode · 题解阅读器
   数据来自 apps/web/public/db（index.json / questions/<cat>/<page>.json / solutions/<id>.json）
   ========================================================================== */
(function () {
  'use strict';

  /* ── 语言表 ─────────────────────────────────────────────────────────── */
  const LANGS = {
    C:          { label: 'C',          hl: 'c',          color: 'var(--lang-c)' },
    CPP:        { label: 'C++',        hl: 'cpp',        color: 'var(--lang-cpp)' },
    Go:         { label: 'Go',         hl: 'go',         color: 'var(--lang-go)' },
    Java:       { label: 'Java',       hl: 'java',       color: 'var(--lang-java)' },
    TypeScript: { label: 'TypeScript', hl: 'typescript', color: 'var(--lang-ts)' },
    Python:     { label: 'Python',     hl: 'python',     color: 'var(--lang-py)' },
    Rust:       { label: 'Rust',       hl: 'rust',       color: 'var(--lang-rs)' },
  };
  const LANG_ORDER = ['C', 'CPP', 'Go', 'Java', 'TypeScript', 'Python', 'Rust'];

  /* ── 工具 ───────────────────────────────────────────────────────────── */
  const $ = (id) => document.getElementById(id);
  const sleep = (ms) => new Promise((r) => setTimeout(r, ms));
  const esc = (s) => String(s == null ? '' : s)
    .replace(/&/g, '&amp;').replace(/</g, '&lt;').replace(/>/g, '&gt;').replace(/"/g, '&quot;');

  function b64utf8(b64) {
    if (!b64) return '';
    try {
      const bin = atob(b64);
      const bytes = Uint8Array.from(bin, (c) => c.charCodeAt(0));
      return new TextDecoder('utf-8').decode(bytes);
    } catch { return ''; }
  }
  const diffClass = (d) => String(d || '').toLowerCase();

  /* ── 代码高亮（极简 tokenizer）───────────────────────────────────────── */
  const KEYWORDS = {
    c: 'auto break case char const continue default do double else enum extern float for goto if inline int long register restrict return short signed sizeof static struct switch typedef union unsigned void volatile while NULL',
    cpp: 'auto bool break case catch char class const constexpr continue default delete do double else enum explicit export extern false float for friend goto if inline int long namespace new nullptr operator private protected public return short signed sizeof static struct switch template this throw true try typedef typename union unsigned using virtual void volatile while',
    go: 'break case chan const continue default defer else fallthrough for func go goto if import interface map package range return select struct switch type var nil true false string int int8 int16 int32 int64 uint byte rune float32 float64 bool make len cap append copy delete panic recover',
    java: 'abstract assert boolean break byte case catch char class const continue default do double else enum extends final finally float for goto if implements import instanceof int interface long native new package private protected public return short static strictfp super switch synchronized this throw throws transient try void volatile while true false null var',
    typescript: 'abstract any as async await boolean break case catch class const continue declare default delete do else enum export extends false finally for from function if implements import in instanceof interface let new null number private protected public return static string super switch this throw true try type typeof undefined var void while yield readonly',
    python: 'and as assert async await break class continue def del elif else except False finally for from global if import in is lambda None nonlocal not or pass raise return True try while with yield self print range len',
    rust: 'as async await break const continue crate dyn else enum extern false fn for if impl in let loop match mod move mut pub ref return self Self static struct super trait true type unsafe use where while String Vec Option Some None Ok Err',
  };

  function hl(code, lang) {
    const kw = new Set((KEYWORDS[lang] || '').split(/\s+/).filter(Boolean));
    const lineTok = lang === 'python' ? '#' : '//';
    const block = lang !== 'python';
    const out = [];
    const tok = (cls, s) => `<span class="t-${cls}">${esc(s)}</span>`;
    const isId = (c) => /[A-Za-z0-9_$]/.test(c);
    let i = 0;
    const n = code.length;
    while (i < n) {
      const c = code[i];
      if (block && code.startsWith('/*', i)) {
        const end = code.indexOf('*/', i + 2);
        const e = end === -1 ? n : end + 2;
        out.push(tok('cm', code.slice(i, e))); i = e; continue;
      }
      if (code.startsWith(lineTok, i)) {
        const end = code.indexOf('\n', i);
        const e = end === -1 ? n : end;
        out.push(tok('cm', code.slice(i, e))); i = e; continue;
      }
      if (c === '"' || c === "'" || c === '`') {
        let j = i + 1;
        while (j < n) {
          if (code[j] === '\\') { j += 2; continue; }
          if (code[j] === c) { j++; break; }
          if (code[j] === '\n' && c !== '`') break;
          j++;
        }
        out.push(tok('st', code.slice(i, j))); i = j; continue;
      }
      if (/[0-9]/.test(c)) {
        let j = i;
        while (j < n && /[0-9a-fA-FxX._]/.test(code[j])) j++;
        out.push(tok('nu', code.slice(i, j))); i = j; continue;
      }
      if (/[A-Za-z_$]/.test(c)) {
        let j = i;
        while (j < n && isId(code[j])) j++;
        const w = code.slice(i, j);
        out.push(kw.has(w) ? tok('kw', w) : esc(w)); i = j; continue;
      }
      out.push(esc(c)); i++;
    }
    return out.join('');
  }

  /* ── 数据源探测 ─────────────────────────────────────────────────────── */
  const qs = new URLSearchParams(location.search);
  const DATA_CANDIDATES = [qs.get('data'), 'db', '../web/public/db', 'data'].filter(Boolean);
  let DATA = null;

  async function probe() {
    for (const base of DATA_CANDIDATES) {
      try {
        const r = await fetch(base + '/index.json', { cache: 'no-cache' });
        if (r.ok) { DATA = base; return await r.json(); }
      } catch { /* try next */ }
    }
    throw new Error('无法读取题库数据（index.json）');
  }

  /* ── 状态 ───────────────────────────────────────────────────────────── */
  const state = {
    cat: 'All',
    page: 0,
    total: 0,
    allTotal: 0,
    loaded: 0,
    loading: false,
    done: false,
    cats: [],
    byId: new Map(),
    query: '',
    selected: null,
    question: null,
    solutions: [],
    lang: localStorage.getItem('leet_lang') || '',
    descLang: localStorage.getItem('leet_desc') || 'zh',
  };

  const els = {
    catBtn: $('catBtn'), catName: $('catName'), catCount: $('catCount'), catMenu: $('catMenu'),
    search: $('searchInput'), searchClear: $('searchClear'),
    timeline: $('timeline'), sentinel: $('sentinel'), listHint: $('listHint'), listEmpty: $('listEmpty'),
    reader: $('reader'), readerTitle: $('readerTitle'), descToggle: $('descToggle'), barMeta: $('barMeta'),
  };

  /* ── 分类下拉 ───────────────────────────────────────────────────────── */
  const catTotal = (key) => (key === 'All' ? state.allTotal : (state.cats.find((c) => c.key === key) || {}).count || 0);
  const catLabel = (key) => (key === 'All' ? '全部' : key);

  function updateCatFace() {
    els.catName.textContent = catLabel(state.cat);
    els.catCount.textContent = catTotal(state.cat);
  }
  function renderCatMenu() {
    const items = [{ key: 'All', label: '全部', count: state.allTotal }, ...state.cats];
    els.catMenu.innerHTML = items.map((c) => `
      <li role="option" data-key="${esc(c.key)}" aria-selected="${c.key === state.cat}">
        <span class="cl">${esc(c.label)}</span><span class="cn">${c.count}</span>
      </li>`).join('');
    updateCatFace();
  }
  function openCatMenu(open) {
    els.catMenu.classList.toggle('open', open);
    els.catBtn.setAttribute('aria-expanded', String(open));
  }

  /* ── 题目列表 ───────────────────────────────────────────────────────── */
  function rowHtml(q) {
    const langs = LANG_ORDER.filter((k) => q.solutions && q.solutions[k]);
    const dots = langs.length
      ? `<span class="ql">${langs.map((k) => `<i class="dot" title="${esc(LANGS[k].label)}" style="background:${LANGS[k].color}"></i>`).join('')}</span>`
      : `<span class="ql"><span class="none">—</span></span>`;
    const zh = q.translated_title && q.translated_title !== q.title;
    return `
      <button class="q-row" data-id="${q.question_id}" aria-current="${q.question_id === state.selected}">
        <span class="qk">${esc(q.question_frontend_id)}</span>
        <span class="qt">${esc(zh ? q.translated_title : q.title)}${zh ? ` <span class="en">${esc(q.title)}</span>` : ''}</span>
        <span class="qdiff ${diffClass(q.difficulty)}">${esc((q.difficulty || '').slice(0, 1))}</span>
        ${dots}
      </button>`;
  }

  function matches(q, s) {
    return String(q.question_frontend_id).toLowerCase().includes(s)
      || String(q.question_id).includes(s)
      || (q.title || '').toLowerCase().includes(s)
      || (q.translated_title || '').toLowerCase().includes(s)
      || (q.title_slug || '').toLowerCase().includes(s);
  }

  function hint(matchesCount) {
    if (state.query) {
      els.listHint.textContent = `${matchesCount} 项${state.done ? '' : ' · 搜索中'}`;
    } else {
      els.listHint.textContent = `${state.loaded} / ${state.total}`;
    }
  }

  // 无搜索词：增量追加；有搜索词：整表按过滤重建
  function appendRows(list) {
    if (state.query) { renderFiltered(); return; }
    els.sentinel.insertAdjacentHTML('beforebegin', list.map(rowHtml).join(''));
    hint();
  }

  function rebuild(list) {
    els.timeline.innerHTML = list.join('');
    els.timeline.appendChild(els.sentinel);
    hint();
  }

  function renderAll() {
    rebuild([...state.byId.values()].map(rowHtml));
  }

  function renderFiltered() {
    const s = state.query.trim().toLowerCase();
    const rows = [];
    for (const q of state.byId.values()) if (matches(q, s)) rows.push(rowHtml(q));
    els.listHint.textContent = `${rows.length} 项${state.done ? '' : ' · 搜索中'}`;
    els.timeline.innerHTML = rows.length ? rows.join('') : `<div class="list-empty">没有匹配「${esc(state.query.trim())}」的题目</div>`;
    els.timeline.appendChild(els.sentinel);
  }

  async function loadMore() {
    if (state.loading || state.done) return;
    state.loading = true;
    const next = state.page + 1;
    try {
      const r = await fetch(`${DATA}/questions/${encodeURIComponent(state.cat)}/${next}.json`, { cache: 'no-cache' });
      if (!r.ok) { state.done = true; return; }
      const list = await r.json();
      if (!Array.isArray(list) || list.length === 0) { state.done = true; return; }
      state.page = next;
      state.loaded += list.length;
      list.forEach((q) => state.byId.set(q.question_id, q));
      appendRows(list);
      if (list.length < 50) state.done = true;
    } catch {
      state.done = true;
    } finally {
      state.loading = false;
    }
  }

  function resetList() {
    state.page = 0;
    state.loaded = 0;
    state.done = false;
    state.loading = false;
    state.byId.clear();
    els.timeline.innerHTML = '';
    els.timeline.appendChild(els.sentinel);
    els.listHint.textContent = '';
  }

  const io = new IntersectionObserver((entries) => {
    if (entries.some((e) => e.isIntersecting)) loadMore();
  }, { root: els.timeline, rootMargin: '600px 0px' });
  io.observe(els.sentinel);

  async function selectCategory(key) {
    if (state.cat === key) { openCatMenu(false); return; }
    state.cat = key;
    state.total = catTotal(key);
    renderCatMenu();
    resetList();
    els.timeline.scrollTop = 0;
    await loadMore();
    if (state.query) { renderFiltered(); pumpSearch(); }
    document.body.classList.remove('drawer');
  }

  /* ── 搜索 ───────────────────────────────────────────────────────────── */
  let searchPump = false;
  async function pumpSearch() {
    if (searchPump || !state.query) return;
    searchPump = true;
    try {
      while (state.query && !state.done) {
        if (state.loading) { await sleep(60); continue; }
        const before = state.loaded;
        await loadMore();
        if (state.loaded === before && !state.done) await sleep(60);
      }
    } finally { searchPump = false; }
  }

  let searchTimer = null;
  function onSearch() {
    const val = els.search.value;
    els.searchClear.hidden = !val.trim();
    clearTimeout(searchTimer);
    searchTimer = setTimeout(() => {
      const q = val.trim().toLowerCase();
      const changed = q !== state.query;
      state.query = q;
      if (!changed) return;
      if (q) { renderFiltered(); pumpSearch(); }
      else { renderAll(); }
    }, 140);
  }

  /* ── 题解阅读 ───────────────────────────────────────────────────────── */
  function renderEmpty(title, msg) {
    els.reader.innerHTML = `<div class="empty"><b>${esc(title)}</b><span>${esc(msg)}</span></div>`;
    els.readerTitle.textContent = '';
    els.descToggle.innerHTML = '';
  }

  function descHtml(q) {
    const zh = b64utf8(q.translated_content);
    const en = b64utf8(q.content);
    return state.descLang === 'en' ? (en || zh) : (zh || en);
  }

  function renderHead(q) {
    const zh = q.translated_title && q.translated_title !== q.title;
    const url = `https://leetcode.cn/problems/${esc(q.title_slug)}/`;
    return `
      <header class="q-head">
        <h1><span class="idx">${esc(q.question_frontend_id)}</span>${esc(zh ? q.translated_title : q.title)}
          ${zh ? `<span class="en">${esc(q.title)}</span>` : ''}</h1>
        <div class="q-meta">
          <span class="badge ${diffClass(q.difficulty)}">${esc(q.difficulty)}</span>
          <span>通过率 <b>${esc(q.acRate || '—')}</b></span>
          <span>${esc(q.category_title)}</span>
          <a href="${url}" target="_blank" rel="noopener">打开 LeetCode ↗</a>
        </div>
      </header>
      <div class="desc" id="desc"></div>`;
  }

  function renderSolutions() {
    const sols = state.solutions;
    if (!sols.length) {
      return `<div class="sol-head"><h2>题解</h2><span class="cnt">无</span></div>
        <div class="list-empty" style="padding:26px 0">这道题暂未收录可运行题解。</div>`;
    }
    const tabs = sols.map((s) => {
      const meta = LANGS[s.language] || { label: s.language, color: 'var(--ink-faint)' };
      return `<button class="tab" role="tab" data-lang="${esc(s.language)}" aria-selected="${s.language === state.lang}">
        <i class="dot" style="background:${meta.color}"></i>${esc(meta.label)}</button>`;
    }).join('');
    const cur = sols.find((s) => s.language === state.lang) || sols[0];
    const meta = LANGS[cur.language] || { hl: '' };
    return `
      <div class="sol-head"><h2>题解</h2><span class="cnt">${sols.length} 种语言</span></div>
      <div class="tabs" role="tablist">${tabs}</div>
      <div class="code-wrap">
        <div class="code-head"><span class="fn">${esc(cur.filename)}</span><button class="copy" id="copyBtn">复制</button></div>
        <pre class="code"><code>${hl(b64utf8(cur.data), meta.hl)}</code></pre>
      </div>`;
  }

  function paintReader() {
    const q = state.question;
    if (!q) return;
    els.readerTitle.innerHTML = `<b>${esc(q.question_frontend_id)}.</b> ${esc(q.translated_title || q.title)}`;
    els.descToggle.innerHTML = b64utf8(q.content)
      ? `<span class="sorts"><span class="lbl">题面</span>
          <button data-desc="zh" aria-pressed="${state.descLang === 'zh'}">中文</button>
          <button data-desc="en" aria-pressed="${state.descLang === 'en'}">EN</button></span>`
      : '';
    els.reader.innerHTML = renderHead(q) + renderSolutions();
    const desc = $('desc');
    if (desc) desc.innerHTML = descHtml(q);
    els.reader.scrollTop = 0;
  }

  function renderCode() {
    const wrap = els.reader.querySelector('.code-wrap');
    if (!wrap) return;
    const cur = state.solutions.find((s) => s.language === state.lang) || state.solutions[0];
    if (!cur) return;
    const meta = LANGS[cur.language] || { hl: '' };
    wrap.querySelector('.fn').textContent = cur.filename;
    wrap.querySelector('pre.code code').innerHTML = hl(b64utf8(cur.data), meta.hl);
    els.reader.querySelectorAll('.tab').forEach((t) => t.setAttribute('aria-selected', String(t.dataset.lang === state.lang)));
  }

  async function selectQuestion(q) {
    state.selected = q.question_id;
    state.question = q;
    localStorage.setItem('leet_last', String(q.question_id));
    els.timeline.querySelectorAll('.q-row').forEach((el) => el.setAttribute('aria-current', String(el.dataset.id === String(q.question_id))));
    paintReader();
    document.body.classList.remove('drawer');
    try {
      const r = await fetch(`${DATA}/solutions/${q.question_id}.json`, { cache: 'no-cache' });
      state.solutions = r.ok ? await r.json() : [];
    } catch { state.solutions = []; }
    if (state.question !== q) return;
    const langs = state.solutions.map((s) => s.language);
    if (!langs.includes(state.lang)) state.lang = langs[0] || '';
    paintReader();
  }

  /* ── 事件 ───────────────────────────────────────────────────────────── */
  els.catBtn.addEventListener('click', (e) => {
    e.stopPropagation();
    openCatMenu(!els.catMenu.classList.contains('open'));
  });
  els.catMenu.addEventListener('click', (e) => {
    const li = e.target.closest('li[data-key]');
    if (!li) return;
    openCatMenu(false);
    selectCategory(li.dataset.key);
  });
  document.addEventListener('click', () => openCatMenu(false));
  document.addEventListener('keydown', (e) => { if (e.key === 'Escape') openCatMenu(false); });

  els.search.addEventListener('input', onSearch);
  els.searchClear.addEventListener('click', () => {
    els.search.value = '';
    els.searchClear.hidden = true;
    clearTimeout(searchTimer);
    state.query = '';
    renderAll();
    els.search.focus();
  });

  els.timeline.addEventListener('click', (e) => {
    const row = e.target.closest('.q-row');
    if (!row) return;
    const q = state.byId.get(Number(row.dataset.id));
    if (q) selectQuestion(q);
  });

  els.reader.addEventListener('click', (e) => {
    const tab = e.target.closest('.tab');
    if (tab) {
      state.lang = tab.dataset.lang;
      localStorage.setItem('leet_lang', state.lang);
      renderCode();
      return;
    }
    const copy = e.target.closest('#copyBtn');
    if (copy) {
      const cur = state.solutions.find((s) => s.language === state.lang) || state.solutions[0];
      if (!cur) return;
      navigator.clipboard.writeText(b64utf8(cur.data)).then(() => {
        copy.textContent = '已复制';
        copy.classList.add('done');
        setTimeout(() => { copy.textContent = '复制'; copy.classList.remove('done'); }, 1400);
      });
    }
    const d = e.target.closest('button[data-desc]');
    if (d) {
      state.descLang = d.dataset.desc;
      localStorage.setItem('leet_desc', state.descLang);
      paintReader();
    }
  });

  $('menuBtn').addEventListener('click', () => {
    const on = !document.body.classList.contains('drawer');
    document.body.classList.toggle('drawer', on);
    $('menuBtn').setAttribute('aria-expanded', String(on));
  });
  $('drawerClose').addEventListener('click', () => document.body.classList.remove('drawer'));
  $('backdrop').addEventListener('click', () => document.body.classList.remove('drawer'));

  /* ── 启动 ───────────────────────────────────────────────────────────── */
  (async function boot() {
    let index;
    try {
      index = await probe();
    } catch (err) {
      renderEmpty('读不到题库数据', '请用一个静态服务打开本页面（见 README）。');
      els.listEmpty.textContent = '读不到题库数据';
      return;
    }
    state.cats = index.map((c) => ({ key: c.category_title, label: c.category_title, count: c.num }));
    state.allTotal = index.reduce((s, c) => s + c.num, 0);
    state.total = state.allTotal;
    els.barMeta.innerHTML = `共 <b>${state.allTotal}</b> 题 · ${state.cats.length} 个分类`;
    renderCatMenu();
    els.timeline.appendChild(els.sentinel);
    els.listEmpty.remove();
    await loadMore();
  })();
})();
