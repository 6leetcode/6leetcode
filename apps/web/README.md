# web

LeetCode 题解前端：**无框架、无 antd、无构建步骤**，纯 HTML / CSS / JS，采用「报纸版式」设计
（参考 `testtrending/ai-newspaper` 与 `trending`）。

- **左栏**：**分类下拉** + **搜索框**（题号 / 标题 / slug），下方题目列表（**滚动加载**，每页 50 题）。
- **右栏**：题面（**仅中文**）+ 题解（语言切换、复制代码、极简语法高亮）。
- 未选中题目时默认展示第一题；选中后 URL 会写成 `/<title-slug>`，便于分享。

全站使用自托管的 **Maple Mono NF CN**（Regular 400 / Bold 700，按 unicode-range 分片，见
`assets/fonts/`），英文与中文同一套等宽字体。

## 运行

题库数据就在同级 `db/`（由 CLI 生成）。在本目录起本地服务：

```bash
cd apps/web
python3 serve.py            # 默认端口 8138
# 打开 http://localhost:8138/
```

或双击 `serve.command`。

> 为什么用 `serve.py`：选中题目后 URL 会变成 `/<slug>`（如 `/two-sum`），刷新或打开分享链接时
> 需要把这些不存在的路径回退到 `index.html`。`python3 -m http.server` 没有这个回退，会 404。
> 部署到 Pages 时，这个回退由同目录的 `404.html` 承担。

## URL 定位

- 打开 `/` → 默认定位到第一题（两数之和）。
- 选中任意题目 → `history.pushState` 写入 `/<title-slug>`（如 `/add-two-numbers`）。
- 直接打开 `/<title-slug>` → 自动加载并定位到该题目；浏览器的前进/后退也同步。
- 分类与搜索仍是前端状态，不写进 URL。

## 数据

`db/` 由 `apps/cli` 生成（配置 `Public: apps/web/db`）：

- `index.json` — 分类与题数
- `questions/<分类>/<页>.json` — 每页 50 题
- `solutions/<题目 id>.json` — 各语言题解

应用启动时按 `db` → `data` 顺序探测，也可用 `?data=<路径>` 覆盖。

## 文件

```
web/
  index.html          页面骨架
  404.html            Pages 的 SPA 回退（index.html 的副本）
  assets/app.css      报纸版式样式
  assets/app.js       应用逻辑（分类 / 滚动加载 / 搜索 / 题解 / 高亮 / URL 路由）
  assets/fonts/       自托管的 Maple Mono NF CN
  db/                 生成的题库 JSON
  favicon.svg
  serve.py            本地静态服务（带 SPA 回退）
  serve.command       双击起服务
```

> 改了 `index.html` 后记得同步 `404.html`（`cp index.html 404.html`）。
