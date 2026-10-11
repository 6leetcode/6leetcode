import { existsSync, mkdirSync, readdirSync, writeFileSync } from "node:fs";
import { basename, dirname, extname, join } from "node:path";
import type { Config } from "./config";
import type { DB, QuestionRow } from "./db";
import { allQuestionsOrdered, categoriesInOrder } from "./db";
import { questionId } from "./ids";
import { HostLeetcode } from "./leetcode";

const suffixes = [".c", ".cc", ".go", ".java", ".ts", ".py", ".rs"];
const makefiles: Record<string, string> = {
  ".c": "c.makefile",
  ".cc": "cc.makefile",
  ".go": "go.makefile",
  ".java": "java.makefile",
  ".ts": "typescript.makefile",
  ".py": "python.makefile",
  ".rs": "rust.makefile",
};
const targets: Record<string, string> = {
  ".c": "c",
  ".cc": "cc",
  ".go": "go",
  ".java": "java",
  ".ts": "typescript",
  ".py": "python",
  ".rs": "rust",
};

const makefileDir = "testing";

const tableTitle =
  "|Index|Difficulty|C|C++|Go|Java|TypeScript|Python|Rust|\n" +
  "|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|\n";

const EngReadme =
  "# LeetCode\n\n" +
  "LeetCode Solutions.\n\n" +
  "## Solutions file rules\n\n" +
  "- Each problem is organized according to the title number.\n" +
  "- Each problem folder has a description file which one named `readme.md`.\n" +
  "- The primary solution for each language lives in `Testing.<ext>`. Additional solutions for the same language use the language name plus an index, ranked by algorithm optimization: a smaller index is more optimized. For example, `c1.c` performs better than `c2.c`.\n" +
  "- Each problem solution must contain a `main` function that contains all the test cases that can be thought of, making it easy to run offline. The solution function is written separately as a separate function.\n\n" +
  "## How to test problem's solution offline\n\n" +
  "- Entering a language environment requires only `make $language`. For example, the environment that enters Python is `make python`. It may take some time to enter a certain environment for the first time. The `Docker` image will be compiled first.\n" +
  "- All files in this directory will be mapped to the `/app` directory of `Container`.\n" +
  "- The environment of `Container` may be `Debian` or `Alpine`.\n\n" +
  "## Solutions' list\n";

const ZHReadme =
  "# LeetCode\n\n" +
  "LeetCode 题解\n\n" +
  "## 文件规则\n\n" +
  "- 每个题目按照题目序号编排。\n" +
  "- 每个题目文件夹下有相关的题目说明，文件名为 `readme.md`。\n" +
  "- 每种语言的主题解文件为 `Testing.<ext>`，同一语言的额外题解以语言名加序号命名，按算法优化程度排名，序号越小越优。例如：`c1.c` 的性能优于 `c2.c`。\n" +
  "- 每个题目里边都要含有 `main` 函数，含有可以想到的所有测试案例，方便线下运行。题解函数，单独写成一个独立的函数。\n\n" +
  "## 本地测试\n\n" +
  "- 进入某种语言的环境仅需要 `make $language`，例如进入 python 的环境就是 `make python`，第一次进入某一种环境可能会需要一些时间，首先会编译这个 `Docker` 镜像。\n" +
  "- 本目录的所有文件将会映射到 `Container` 的 `/app` 目录下。\n" +
  "- `Container` 的环境可能是 `Debian` 或者 `Alpine`。\n\n" +
  "## Solutions' list\n";

const dirCaseCache = new Map<string, string>();

/**
 * Reuse the casing of an existing directory when it differs only by case.
 * Problem titles change casing over time (e.g. "ZigZag" -> "Zigzag"); on a
 * case-sensitive filesystem (CI/Linux) writing the new casing would create a
 * duplicate directory next to the tracked one.
 */
function resolveExistingCase(dir: string): string {
  const parent = dirname(dir);
  const base = basename(dir);
  const key = `${parent}\u0000${base.toLowerCase()}`;
  const cached = dirCaseCache.get(key);
  if (cached !== undefined) return cached;

  let resolved = dir;
  try {
    const match = readdirSync(parent).find((name) => name.toLowerCase() === base.toLowerCase());
    if (match) resolved = join(parent, match);
  } catch {
    // parent does not exist yet
  }
  dirCaseCache.set(key, resolved);
  return resolved;
}

export function questionDir(config: Config, q: Pick<QuestionRow, "category_title" | "question_frontend_id" | "title">): string {
  return resolveExistingCase(
    `${config.questionDir}/${q.category_title}/${questionId(q.question_frontend_id)}. ${q.title}`,
  );
}

function walkFiles(dir: string, cb: (full: string, name: string) => void): void {
  const entries = readdirSync(dir, { withFileTypes: true }).sort((a, b) => (a.name < b.name ? -1 : a.name > b.name ? 1 : 0));
  for (const entry of entries) {
    const full = join(dir, entry.name);
    if (entry.isDirectory()) walkFiles(full, cb);
    else cb(full, entry.name);
  }
}

function entry(
  questions: QuestionRow[],
  categoryTitle: string,
  makefileMap: Map<string, string[]>,
  config: Config,
): string {
  let str = `\n<details>\n\n  <summary>${categoryTitle}</summary>\n\n`;
  str += tableTitle;

  for (const question of questions) {
    if (question.category_title !== categoryTitle) continue;

    const dir = questionDir(config, question);
    if (!existsSync(dir)) continue;

    const languageMap = new Map<string, string[]>();
    str += `|[${questionId(question.question_frontend_id)}](${HostLeetcode}/problems/${question.title_slug})|${question.difficulty}|`;

    walkFiles(dir, (full, name) => {
      if (name === "README.md" || name === "README_ZH.md" || name === "Makefile") return;
      const ext = extname(full);
      if (!suffixes.includes(ext)) return;
      const parent = dirname(full);
      const list = makefileMap.get(ext) ?? [];
      if (!list.includes(parent)) list.push(parent);
      makefileMap.set(ext, list);
      const langs = languageMap.get(ext) ?? [];
      langs.push(name);
      languageMap.set(ext, langs);
    });

    for (const suffix of suffixes) {
      if ((languageMap.get(suffix) ?? []).length !== 0) str += ":white_check_mark:";
      str += "|";
    }
    str += "\n";
  }

  str += "\n</details>\n";
  return str;
}

function writeMakefiles(makefileMap: Map<string, string[]>): void {
  if (!existsSync(makefileDir)) mkdirSync(makefileDir, { recursive: true });
  for (const suffix of suffixes) {
    const filename = makefiles[suffix];
    if (!filename) continue;
    const dirs = makefileMap.get(suffix) ?? [];
    let str = "DIRS = ";
    dirs.forEach((val, index) => {
      const quoted = `"${val}"`.replaceAll(" ", "\\ ");
      str += index === 0 ? quoted : " " + quoted;
    });
    str += `\nrun: \${DIRS}\n\${DIRS}:\n\tmake -C $@ ${targets[suffix]}\n`;
    writeFileSync(`${makefileDir}/${filename}`, str);
  }
}

function generate(questions: QuestionRow[], filename: string, prefix: string, config: Config): void {
  const makefileMap = new Map<string, string[]>();
  let out = prefix;
  for (const category of categoriesInOrder2(questions)) {
    out += entry(questions, category, makefileMap, config);
  }
  writeFileSync(filename, out);

  if (filename === "README.md") writeMakefiles(makefileMap);
}

function categoriesInOrder2(questions: QuestionRow[]): string[] {
  const res: string[] = [];
  for (const q of questions) {
    if (!res.includes(q.category_title)) res.push(q.category_title);
  }
  return res;
}

export function generateReadme(db: DB, config: Config): void {
  const questions = allQuestionsOrdered(db);
  generate(questions, "README.md", EngReadme, config);
  generate(questions, "README_ZH.md", ZHReadme, config);
}

/** bun:sqlite returns BLOB columns (GORM wrote []byte as blobs) as Uint8Array. */
function toText(value: string | Uint8Array | null | undefined): string {
  if (value === null || value === undefined) return "";
  return typeof value === "string" ? value : Buffer.from(value).toString("utf8");
}

/** Write a single question's README.md / README_ZH.md / Makefile. */
export function writeQuestionFiles(config: Config, q: QuestionRow): void {
  const dir = questionDir(config, q);
  mkdirSync(dir, { recursive: true });
  writeFileSync(
    `${dir}/README.md`,
    `### [${q.title}](https://leetcode.com/problems/${q.title_slug})\n\n${toText(q.content)}`,
  );
  writeFileSync(
    `${dir}/README_ZH.md`,
    `### [${q.translated_title}](https://leetcode.cn/problems/${q.title_slug})\n\n${toText(q.translated_content)}`,
  );
  writeFileSync(`${dir}/Makefile`, "include ../../../Makefile.lang.mk\n");
}

export { categoriesInOrder };
