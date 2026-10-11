# web1

`apps/web` 的重构版预览：**无框架、无 antd、无构建步骤**，纯 HTML / CSS / JS，
采用「报纸版式」设计（参考 `testtrending/ai-newspaper` 与 `trending`）。

- **左栏**：**分类下拉** + **搜索框**（题号 / 标题 / slug），下方题目列表（**滚动加载**，每页 50 题）。
- **右栏**：题面（**仅中文**）+ 题解（语言切换、复制代码、极简语法高亮）。

英文正文使用 [Fontsource 的 Nunito](https://fontsource.org/fonts/nunito/use?tab=web)（CDN），
中文与代码回落到等宽字体栈（`ui-monospace, …, monospace`）。

## 运行

题库数据复用 `apps/web/public/db`（由 `leet gen` / `leet all` 生成）。
web1 通过相对路径 `../web/public/db` 读取，因此**从仓库根目录**起静态服务：

```bash
# 在仓库根目录
python3 -m http.server 8138
# 打开 http://localhost:8138/apps/web1/
```

或直接双击 `serve.command`（会自动在仓库根起服务并打开页面）。

> 浏览器不允许 `file://` 页面读取本地 JSON，必须走 HTTP。

## 数据源

启动时按 `db` → `../web/public/db` → `data` 顺序探测 `index.json`，
也可用查询参数覆盖：`?data=../web/public/db`。

## 文件

```
web1/
  index.html          页面骨架
  assets/app.css      报纸版式样式
  assets/app.js       应用逻辑（分类 / 滚动加载 / 题解 / 高亮）
  favicon.svg
  serve.command
```

> 说明：设计参考里用的 Maple Mono NF CN 字体约 22MB，这里未打包，中文与代码改用系统等宽字体。
> 英文则由 Nunito（Fontsource CDN）渲染；需要离线自托管可把字体放进 `assets/fonts/` 并改用本地 `@font-face`。
