#!/usr/bin/env python3
import os
import subprocess

for dir in os.listdir("."):
    if os.path.isdir(dir) and dir != ".git" and dir != ".idea" and dir != ".vscode" and dir != "docker":
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
                for file in os.listdir(dir):
                    if os.path.splitext(file)[1] == ".cache":
                        os.system("rm \"" + dir + "/" + file + "\"")
            # Rust
            elif os.path.splitext(inner)[1] == ".rs":
                print(dir + "/" + inner)
                os.system("rustfmt --write-mode replace --force \"" +
                          dir + "/" + inner + "\"")
                for file in os.listdir(dir):
                    if os.path.splitext(file)[1] == ".bk":
                        os.system("rm \"" + dir + "/" + file + "\"")
            # Java
            elif os.path.splitext(inner)[1] == ".java":
                print(dir + "/" + inner)
                os.system("google-java-format --aosp -i \"" +
                          dir + "/" + inner + "\"")
            # Javascript
            elif os.path.splitext(inner)[1] == ".js":
                print(dir + "/" + inner)
                os.system("js-beautify -r \"" + dir + "/" + inner + "\"")
