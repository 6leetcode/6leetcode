#!/usr/bin/env python3

import os

prefix = "https://leetcode.com/problems/"
base_code_prefix = "https://github.com/6leetcode/6leetcode/blob/master/questions/"
code_prefix_algorithm = "Algorithms/"
code_prefix_database = "Database/"
code_prefix_shell = "Shell/"
code_prefix_concurrency = "Concurrency/"
basedir = os.getcwd() + "/questions"


def rewrite_readme(name, table_content):
    file = open(name, "r+")
    data = file.readlines()

    file.seek(0)
    file.truncate()

    result = []

    for _data in data:
        if _data.strip() != "### Solutions' list":
            result.append(_data.strip())
        else:
            result.append("### Solutions' list")
            break
    result.append(table_content)

    file.write("\n".join(result))
    file.close()


def lang(_list, problem_name, code_prefix):
    if len(_list) == 0:
        return ""
    if len(_list) == 1:
        return "[1](" + base_code_prefix + code_prefix + problem_name.replace(" ", "%20") + "/" + _list[0] + ")"
    else:
        result = "[1](" + base_code_prefix + code_prefix + problem_name.replace(" ", "%20") + "/" + _list[0] + ")"
    for i in range(1, len(_list)):
        result += " " + "[" + str(i + 1) + "](" + base_code_prefix + code_prefix + \
                  problem_name.replace(" ", "%20") + "/" + _list[i] + ")"
    return result


# def genMakefile(pathname, suffix):
#     lang_name = suffix
#     if suffix == "py":
#         lang_name = "python"
#     elif suffix == "js":
#         lang_name = "node"
#     elif suffix == "rs":
#         lang_name = "rust"
#     elif suffix == "go":
#         lang_name = "golang"
#     elif suffix == "sh":
#         lang_name = "shell"
#     with open(pathname + "/" + lang_name + ".makefile", "w+") as f:
#         targets = []
#         for p in problemsPath:
#             files = os.listdir(p)
#             files.sort()
#             for _inner in files:
#                 if os.path.splitext(_inner)[1] == suffix:
#                     targets.append("\"" + p.replace(" ", "\\ ") + "\"")
#         f.writelines("DIRS = " + " ".join(targets))
#         f.writelines("\nrun: ${DIRS}\n${DIRS}:")
#         f.writelines("\n\tmake -C $@ " + lang_name + "\n")


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
    shell = {}
    concurrency = {}

    problems = []

    table = ["|Problem|C|C++|Go|Java|JS|PHP|Python|Rust|SQL|Bash|",
             "|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|"]

    problemsPath = []
    for base in os.listdir(basedir):
        for d in os.listdir(os.path.join(basedir, base)):
            problemsPath.append("questions/" + base + "/" + d)
            problems.append(d)
            c[d] = []
            cc[d] = []
            go[d] = []
            java[d] = []
            javascript[d] = []
            php[d] = []
            python[d] = []
            rust[d] = []
            sql[d] = []
            shell[d] = []
            concurrency[d] = []

            fileList = os.listdir(os.path.join(basedir, base, d))
            fileList.sort()
            for inner in fileList:
                # Golang
                if os.path.splitext(inner)[1] == ".go":
                    go[d].append(inner)
                # C/C++
                elif os.path.splitext(inner)[1] == ".c":
                    c[d].append(inner)
                elif os.path.splitext(inner)[1] == ".cc":
                    cc[d].append(inner)
                # PHP
                elif os.path.splitext(inner)[1] == ".php":
                    php[d].append(inner)
                # Rust
                elif os.path.splitext(inner)[1] == ".rs":
                    rust[d].append(inner)
                # Java
                elif os.path.splitext(inner)[1] == ".java":
                    java[d].append(inner)
                # Javascript
                elif os.path.splitext(inner)[1] == ".js":
                    javascript[d].append(inner)
                # Python
                elif os.path.splitext(inner)[1] == ".py":
                    python[d].append(inner)
                # Bash
                elif os.path.splitext(inner)[1] == ".sh":
                    shell[d].append(inner)
    problems.sort()

    for problem in problems:
        s = "|[" + problem[:4] + "](" + prefix + problem[6:] \
            .replace(" ", "-").replace("(", "").replace("(", "") \
            .replace(")", "").replace(",", "").lower() + ")"
        if len(sql[problem]) != 0:
            if lang(sql[problem], problem, code_prefix_database) == "":
                continue
            s += "|-|-|-|-|-|-|-|-|" + lang(sql[problem], problem, code_prefix_database) + "|-|"
        if len(shell[problem]) != 0:
            if lang(shell[problem], problem, code_prefix_shell) == "":
                continue
            s += "|-|-|-|-|-|-|-|-|-|" + lang(shell[problem], problem, code_prefix_shell) + "|"
        else:
            if lang(c[problem], problem, code_prefix_algorithm) == "" and \
                    lang(cc[problem], problem, code_prefix_algorithm) == "" and \
                    lang(go[problem], problem, code_prefix_algorithm) == "" and \
                    lang(java[problem], problem, code_prefix_algorithm) == "" and \
                    lang(javascript[problem], problem, code_prefix_algorithm) == "" and \
                    lang(php[problem], problem, code_prefix_algorithm) == "" and \
                    lang(python[problem], problem, code_prefix_algorithm) == "" and \
                    lang(rust[problem], problem, code_prefix_algorithm) == "":
                continue
            s += "|" + lang(c[problem], problem, code_prefix_algorithm) + "|" + \
                 lang(cc[problem], problem, code_prefix_algorithm) + "|" + \
                 lang(go[problem], problem, code_prefix_algorithm) + "|" + \
                 lang(java[problem], problem, code_prefix_algorithm) + "|" + \
                 lang(javascript[problem], problem, code_prefix_algorithm) + "|" + \
                 lang(php[problem], problem, code_prefix_algorithm) + "|" + \
                 lang(python[problem], problem, code_prefix_algorithm) + "|" + \
                 lang(rust[problem], problem, code_prefix_algorithm) + "|-|-|"
        table.append(s)

    rewrite_readme("README.md", "\n" + "\n".join(table))
    rewrite_readme("README_ZH.md", "\n" + "\n".join(table))

    for suffix in ["c", "cc", "rs", "go", "py", "js", "java", "php", "sh"]:
        lang_name = suffix
        if suffix == "py":
            lang_name = "python"
        elif suffix == "js":
            lang_name = "node"
        elif suffix == "rs":
            lang_name = "rust"
        elif suffix == "go":
            lang_name = "golang"
        elif suffix == "sh":
            lang_name = "shell"
        with open("testing/" + lang_name + ".makefile", "w+") as f:
            targets = []
            for p in problemsPath:
                files = os.listdir(p)
                files.sort()
                hasLang = False
                for _inner in files:
                    if os.path.splitext(_inner)[1] == "." + suffix:
                        hasLang = True
                if hasLang:
                    targets.append("\"" + p.replace(" ", "\\ ") + "\"")
            f.writelines("DIRS = " + " ".join(targets))
            f.writelines("\nrun: ${DIRS}\n${DIRS}:")
            f.writelines("\n\tmake -C $@ " + lang_name + "\n")
