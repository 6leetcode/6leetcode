#!/usr/bin/env python3
import os
import urllib.parse

prefix = "https://leetcode.com/problems/"
code_prefix = "https://github.com/6leetcode/6leetcode/blob/master/Algorithm/"


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
        return "[1](" + code_prefix + dir.replace(" ", "%20") + "/" + l[0] + ")"
    else:
        result = "[1](" + code_prefix + \
            dir.replace(" ", "%20") + "/" + l[0] + ")"
    for i in range(1, len(l)):
        result += " " + "[" + str(i+1) + "](" + code_prefix + \
            dir.replace(" ", "%20") + "/" + l[i] + ")"
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
    sql = {}

    problems = []

    table = []
    table.append("|Problem|C|C++|Go|Java|JS|PHP|Python|Rust|SQL|")
    table.append(
        "|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|")

    for dir in os.listdir("./Algorithm"):
        problems.append(dir)
        c[dir] = []
        cc[dir] = []
        go[dir] = []
        java[dir] = []
        javascript[dir] = []
        php[dir] = []
        python[dir] = []
        rust[dir] = []
        sql[dir] = []
        filelist = os.listdir("./Algorithm/" + dir)
        filelist.sort()
        for inner in filelist:
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
    for dir in os.listdir("./Database"):
        problems.append(dir)
        c[dir] = []
        cc[dir] = []
        go[dir] = []
        java[dir] = []
        javascript[dir] = []
        php[dir] = []
        python[dir] = []
        rust[dir] = []
        sql[dir] = []
        filelist = os.listdir("./Database/" + dir)
        filelist.sort()
        for inner in filelist:
            # SQL
            if os.path.splitext(inner)[1] == ".sql":
                sql[dir].append(inner)
    problems.sort()

    for problem in problems:
        s = "|[" + problem[:4] + "](" + prefix + problem[6:].replace(" ", "-")\
            .replace("(", "")\
            .replace("(", "")\
            .replace(")", "")\
            .lower() + ")"
        if len(sql[problem]) != 0:
            s += "|-|-|-|-|-|-|-|-|" + lang(sql[problem], problem) + "|"
        else:
            s += "|"+lang(c[problem], problem) + "|" \
                + lang(cc[problem], problem) + "|" + lang(go[problem], problem) + "|" + \
                lang(java[problem], problem) + "|" + lang(javascript[problem], problem) + "|"+lang(php[problem], problem) + "|" + \
                lang(python[problem], problem) + "|" + \
                lang(rust[problem], problem) + "|-|"
        table.append(s)
    rewrite("README.md", "\n" + "\n".join(table))
    rewrite("README_ZH.md", "\n".join(table))
