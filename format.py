#!/usr/bin/env python3
import os
import subprocess

for dir in os.listdir("."):
    if os.path.isdir(dir) and dir != ".git" and dir != ".idea" and dir != ".vscode":
        for inner in os.listdir(dir):
            # Golang
            if os.path.splitext(inner)[1] == ".go":
                print(dir + "/" + inner)
                os.system("go fmt \"" + dir + "/" + inner + "\"")
            # C/C++
            elif os.path.splitext(inner)[1] == ".c" or os.path.splitext(inner)[1] == ".cpp":
                print(dir + "/" + inner)
                os.system("clang-format -i \"" + dir + "/" + inner + "\"")
            # PHP
            elif os.path.splitext(inner)[1] == ".php":
                print(dir + "/" + inner)
                os.system("php-cs-fixer fix \"" + dir + "/" + inner + "\"")
