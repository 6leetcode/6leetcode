#!/usr/bin/env python3
import os
import urllib.parse

prefix = "https://leetcode.com/problems/"
code_prefix = "https://github.com/6leetcode/6leetcode/blob/master/"


def rewrite(name, table):
    file = open(name, "r+")
    data = file.readlines()

    file.seek(0)
    file.truncate()

    result = []

    for d in data:
        if d.strip() != "### Solutions' list":
            result.append(d.strip())
        else:
            result.append("### Solutions' list")
            break
    result.append(table)

    file.write("\n".join(result))
    file.close()


def lang(l, dir):
    if (len(l) == 0):
        return ""
    result = ""
    if (len(l) == 1):
        return "[" + l[0] + "](" + code_prefix + dir.replace(" ", "%20") + "/" + l[0] + ")"
    else:
        result = "[" + l[0] + "](" + code_prefix + \
            dir.replace(" ", "%20") + "/" + l[0] + ")"
    for i in range(1, len(l)):
        result += " " + "[" + l[i] + "](" + code_prefix + \
            dir.replace(" ", "%20") + "/" + l[0] + ")"
    return result


if __name__ == "__main__":
    c = {}
    cc = {}
    go = {}
    java = {}
    javascript = {}
    php = {}
    python = {}
    rust = {}

    problems = []

    table = []
    table.append("|Problem|C|C++|Go|Java|JavaScript|PHP|Python|Rust|")
    table.append("|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|")

    for dir in os.listdir("."):
        if os.path.isdir(dir) and dir != ".git" and dir != ".idea" and dir != ".vscode" and dir != "docker" and dir != "target":
            problems.append(dir)
            c[dir] = []
            cc[dir] = []
            go[dir] = []
            java[dir] = []
            javascript[dir] = []
            php[dir] = []
            python[dir] = []
            rust[dir] = []
            for inner in os.listdir(dir):
                # Golang
                if os.path.splitext(inner)[1] == ".go":
                    go[dir].append(inner)
                # C/C++
                elif os.path.splitext(inner)[1] == ".c":
                    c[dir].append(inner)
                elif os.path.splitext(inner)[1] == ".cc":
                    cc[dir].append(inner)
                # PHP
                elif os.path.splitext(inner)[1] == ".php":
                    php[dir].append(inner)
                # Rust
                elif os.path.splitext(inner)[1] == ".rs":
                    rust[dir].append(inner)
                # Java
                elif os.path.splitext(inner)[1] == ".java":
                    java[dir].append(inner)
                # Javascript
                elif os.path.splitext(inner)[1] == ".js":
                    javascript[dir].append(inner)
                # Python
                elif os.path.splitext(inner)[1] == ".py":
                    python[dir].append(inner)
    problems.sort()

    for problem in problems:
        s = "|[" + problem[:4] + "](" + prefix + problem[6:].replace(" ", "-")\
            .replace("(", "")\
            .replace("(", "")\
            .replace(")", "")\
            .lower() + ")|" + \
            lang(c[problem], problem) + "|" \
            + lang(cc[problem], problem) + "|" + lang(go[problem], problem) + "|" + \
            lang(java[problem], problem) + "|" + lang(javascript[problem], problem) + "|"+lang(php[problem], problem) + "|" + \
            lang(python[problem], problem) + "|" + \
            lang(rust[problem], problem) + "|"
        table.append(s)
    rewrite("README.md", "\n" + "\n".join(table))
    rewrite("README_ZH.md", "\n".join(table))
