import { existsSync, readdirSync, readFileSync } from "node:fs";
import { extname, join } from "node:path";
import type { DB } from "./db";
import { deleteSolutionsFor, insertSolution } from "./db";

const tokens: { language: string; suffix: string }[] = [
  { language: "C", suffix: ".c" },
  { language: "CPP", suffix: ".cc" },
  { language: "Go", suffix: ".go" },
  { language: "Java", suffix: ".java" },
  { language: "TypeScript", suffix: ".ts" },
  { language: "PHP", suffix: ".php" },
  { language: "Python", suffix: ".py" },
  { language: "Rust", suffix: ".rs" },
  { language: "SQL", suffix: ".sql" },
  { language: "Bash", suffix: ".sh" },
];

/** Extract the text between the "solution begin" / "solution end" markers. */
function extractSolution(text: string): string | null {
  let status = 0;
  const answer: string[] = [];
  for (const line of text.split(/\r?\n/)) {
    if (status === 1) {
      if (line.includes("solution end")) status = 2;
      else answer.push(line);
    }
    if (line.includes("solution begin")) status = 1;
  }
  return status === 2 ? answer.join("\n") : null;
}

function walkFiles(dir: string, cb: (full: string, name: string) => void): void {
  const entries = readdirSync(dir, { withFileTypes: true }).sort((a, b) => (a.name < b.name ? -1 : a.name > b.name ? 1 : 0));
  for (const entry of entries) {
    const full = join(dir, entry.name);
    if (entry.isDirectory()) walkFiles(full, cb);
    else cb(full, entry.name);
  }
}

/** Re-scan a question folder and store every language solution between the markers. */
export function scanSolutions(db: DB, dir: string, questionId: number): void {
  deleteSolutionsFor(db, questionId);
  if (!existsSync(dir)) return;

  walkFiles(dir, (full, name) => {
    if (name === "README.md" || name === "README_ZH.md" || name === "Makefile") return;
    const token = tokens.find((t) => t.suffix === extname(name));
    if (!token) return;
    let text: string;
    try {
      text = readFileSync(full, "utf8");
    } catch {
      return;
    }
    const data = extractSolution(text);
    if (data === null) return;
    insertSolution(db, questionId, token.language, name, data);
  });
}
