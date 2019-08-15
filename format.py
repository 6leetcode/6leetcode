#!/usr/bin/env python3
import os
import subprocess

for dir in os.listdir("./Algorithm"):
    for inner in os.listdir("./Algorithm/" + dir):
        # Golang
        if os.path.splitext(inner)[1] == ".go":
            print(dir + "/" + inner)
            os.system("go fmt \"Algorithm/" + dir + "/" + inner + "\"")
        # C/C++
        elif os.path.splitext(inner)[1] == ".c" or os.path.splitext(inner)[1] == ".cc":
            print(dir + "/" + inner)
            os.system("clang-format -i \"Algorithm/" +
                      dir + "/" + inner + "\"")
        # PHP
        elif os.path.splitext(inner)[1] == ".php":
            print(dir + "/" + inner)
            os.system("php-cs-fixer fix \"Algorithm/" +
                      dir + "/" + inner + "\"")
            for file in os.listdir("./Algorithm/" + dir):
                if os.path.splitext(file)[1] == ".cache":
                    os.system("rm \"Algorithm/" + dir + "/" + file + "\"")
        # Rust
        elif os.path.splitext(inner)[1] == ".rs":
            print(dir + "/" + inner)
            os.system("rustfmt --write-mode replace --force \"" +
                      dir + "/" + inner + "\"")
            for file in os.listdir("./Algorithm/" + dir):
                if os.path.splitext(file)[1] == ".bk":
                    os.system("rm \"Algorithm/" + dir + "/" + file + "\"")
        # Java
        elif os.path.splitext(inner)[1] == ".java":
            print(dir + "/" + inner)
            os.system("google-java-format --aosp -i \"Algorithm/" +
                      dir + "/" + inner + "\"")
        # Javascript
        elif os.path.splitext(inner)[1] == ".js":
            print(dir + "/" + inner)
            os.system("js-beautify -r \"Algorithm/" +
                      dir + "/" + inner + "\"")
