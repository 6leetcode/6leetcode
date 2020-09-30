#!/usr/bin/env python3

import os

for d in os.listdir("./Algorithm"):
    for inner in os.listdir("./Algorithm/" + d):
        # Golang
        if os.path.splitext(inner)[1] == ".go":
            print(d + "/" + inner)
            os.system("go fmt \"Algorithm/" + d + "/" + inner + "\"")
        # C/C++
        elif os.path.splitext(inner)[1] == ".c" or os.path.splitext(inner)[1] == ".cc":
            print(d + "/" + inner)
            os.system("clang-format -i \"Algorithm/" + d + "/" + inner + "\"")
        # PHP
        elif os.path.splitext(inner)[1] == ".php":
            print(d + "/" + inner)
            os.system("php-cs-fixer fix \"Algorithm/" + d + "/" + inner + "\"")
            for file in os.listdir("./Algorithm/" + d):
                if os.path.splitext(file)[1] == ".cache":
                    os.system("rm \"Algorithm/" + d + "/" + file + "\"")
        # Rust
        elif os.path.splitext(inner)[1] == ".rs":
            print(d + "/" + inner)
            os.system("rustfmt --write-mode replace --force \"Algorithm/" +
                      d + "/" + inner + "\"")
            for file in os.listdir("./Algorithm/" + d):
                if os.path.splitext(file)[1] == ".bk":
                    os.system("rm \"Algorithm/" + d + "/" + file + "\"")
        # Java
        elif os.path.splitext(inner)[1] == ".java":
            print(d + "/" + inner)
            os.system("google-java-format --aosp -i \"Algorithm/" + d + "/" + inner + "\"")
        # Javascript
        elif os.path.splitext(inner)[1] == ".js":
            print(d + "/" + inner)
            os.system("js-beautify -r \"Algorithm/" + d + "/" + inner + "\"")
