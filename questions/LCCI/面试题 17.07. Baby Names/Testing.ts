// ------------------------------- solution begin -------------------------------
const trulyMostPopular = (names: string[], synonyms: string[]): string[] => {
  const parent = new Map<string, string>();
  const find = (x: string): string => {
    if (!parent.has(x)) parent.set(x, x);
    if (parent.get(x) !== x) parent.set(x, find(parent.get(x)!));
    return parent.get(x)!;
  };
  const union = (a: string, b: string) => {
    const ra = find(a);
    const rb = find(b);
    if (ra === rb) return;
    if (ra < rb) parent.set(rb, ra);
    else parent.set(ra, rb);
  };
  const freq = new Map<string, number>();
  for (const s of names) {
    const pos = s.indexOf('(');
    const name = s.slice(0, pos);
    freq.set(name, parseInt(s.slice(pos + 1, -1)));
    find(name);
  }
  for (const s of synonyms) {
    const [a, b] = s.slice(1, -1).split(',');
    union(a, b);
  }
  const agg = new Map<string, number>();
  for (const [name, cnt] of freq) {
    const r = find(name);
    agg.set(r, (agg.get(r) ?? 0) + cnt);
  }
  return [...agg.keys()].sort().map((k) => `${k}(${agg.get(k)})`);
};
// ------------------------------- solution end ---------------------------------

const names = ['John(15)', 'Jon(12)', 'Chris(13)', 'Kris(4)', 'Christopher(19)'];
const synonyms = ['(Jon,John)', '(John,Johnny)', '(Chris,Kris)', '(Chris,Christopher)'];
console.log(`Input:  names = [John(15), Jon(12), Chris(13), Kris(4), Christopher(19)], synonyms = [(Jon,John),(John,Johnny),(Chris,Kris),(Chris,Christopher)]`);
console.log(`Output: ${JSON.stringify(trulyMostPopular(names, synonyms))}`);
