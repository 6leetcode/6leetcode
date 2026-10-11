#!/bin/bash
# 双击本文件：在仓库根目录起一个静态服务，并打开 apps/web1
# web1 需要读取 ../web/public/db 的题库 JSON，所以必须从仓库根提供服务。
cd "$(dirname "$0")/../.." || exit 1
PORT=8138
sleep 1 && open "http://localhost:$PORT/apps/web1/" &
echo "http://localhost:$PORT/apps/web1/  ·  Ctrl-C 停止"
exec python3 -m http.server "$PORT"
