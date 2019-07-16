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
                os.system("php-cs-fixer fix \"" + dir +
                          "/" + inner + "\" && rm *.cache")
            # Rust
            elif os.path.splitext(inner)[1] == ".rs":
                print(dir + "/" + inner)
                os.system("rustfmt --write-mode replace --force \"" +
                          dir + "/" + inner + "\" && rm *.bk")
            # Java
            elif os.path.splitext(inner)[1] == ".java":
                print(dir + "/" + inner)
                os.system("google-java-format --aosp -i \"" +
                          dir + "/" + inner + "\"")
            # Javascript
            elif os.path.splitext(inner)[1] == ".js":
                print(dir + "/" + inner)
                os.system("js-beautify -r \"" + dir + "/" + inner + "\"")
