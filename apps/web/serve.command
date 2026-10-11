#!/bin/bash
# 双击本文件：在本目录起一个静态服务并打开页面（题库数据就在同级的 db/）。
cd "$(dirname "$0")" || exit 1
PORT=8138
sleep 1 && open "http://localhost:$PORT/" &
exec python3 serve.py "$PORT"
