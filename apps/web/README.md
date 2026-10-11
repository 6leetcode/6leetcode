# web

LeetCode 题解前端：**无框架、无 antd、无构建步骤**，纯 HTML / CSS / JS，采用「报纸版式」设计
（参考 `testtrending/ai-newspaper` 与 `trending`）。

- **左栏**：**分类下拉** + **搜索框**（题号 / 标题 / slug），下方题目列表（**滚动加载**，每页 50 题）。
- **右栏**：题面（**仅中文**）+ 题解（语言切换、复制代码、极简语法高亮）。

全站使用自托管的 **Maple Mono NF CN**（Regular 400 / Bold 700，按 unicode-range 分片，见
`assets/fonts/`），英文与中文同一套等宽字体。

## 运行

题库数据就在同级 `db/`（由 CLI 生成）。直接在本目录起静态服务即可：

```bash
cd apps/web
python3 -m http.server 8138
# 打开 http://localhost:8138/
```

或双击 `serve.command`。

> 浏览器不允许 `file://` 页面读取本地 JSON，必须走 HTTP。

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
  assets/app.css      报纸版式样式
  assets/app.js       应用逻辑（分类 / 滚动加载 / 搜索 / 题解 / 高亮）
  db/                 生成的题库 JSON
  favicon.svg
  serve.command
```

> 字体：自托管 Maple Mono NF CN（OFL-1.1），英文与中文统一为等宽字体。
