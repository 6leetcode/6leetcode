#!/usr/bin/env python3
"""本地静态服务：支持「斜杠定位」的深链接（找不到的路径回退到 index.html）。

用法: python3 serve.py [port]     默认 8138
"""
import http.server
import os
import sys

os.chdir(os.path.dirname(os.path.abspath(__file__)))
PORT = int(sys.argv[1]) if len(sys.argv) > 1 else 8138


class Handler(http.server.SimpleHTTPRequestHandler):
    def do_GET(self):
        path = self.translate_path(self.path)
        # 无扩展名且文件不存在 -> 回退到 index.html（前端按 URL 路径定位题目）
        if not os.path.exists(path) and not os.path.splitext(self.path)[1]:
            self.path = "/index.html"
        return super().do_GET()

    def log_message(self, *args):
        pass


Handler.extensions_map.update({".js": "text/javascript", ".svg": "image/svg+xml"})

print(f"http://localhost:{PORT}/  ·  Ctrl-C 停止")
http.server.ThreadingHTTPServer(("127.0.0.1", PORT), Handler).serve_forever()
