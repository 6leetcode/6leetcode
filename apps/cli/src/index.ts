import { parseArgs } from "node:util";
import { loadConfig } from "./config";
import type { DB } from "./db";
import { allQuestionsOrdered, openDb, totalQuestions } from "./db";
import { allQuestions, ensureQuestionContent, getBySlug, runPool } from "./leetcode";
import { logging } from "./log";
import { questionDir, generateReadme, writeQuestionFiles } from "./readme";
import { scanSolutions } from "./solutions";
import { generateJson } from "./jsongen";
import { printVersion } from "./version";

const sleep = (ms: number) => new Promise<void>((r) => setTimeout(r, ms));

const { values, positionals } = parseArgs({
  args: Bun.argv.slice(2),
  options: { config: { type: "string", short: "c", default: "./config.yml" } },
  allowPositionals: true,
});

const command = positionals[0];

/** Guards generation: an empty database would wipe the committed README/JSON. */
function ensureQuestions(db: DB): void {
  if (totalQuestions(db) === 0) {
    throw new Error("database contains no questions; refusing to regenerate files");
  }
}

/** Crawl the full problem list and every question body, then write per-question files. */
async function crawl(db: DB, config: ReturnType<typeof loadConfig>): Promise<void> {
  await allQuestions(db);

  const rows = allQuestionsOrdered(db);
  await runPool(rows, 4, async (row) => {
    const fetched = await ensureQuestionContent(db, row.title_slug);
    const fresh = getBySlug(db, row.title_slug);
    if (!fresh) return;
    writeQuestionFiles(config, fresh);
    scanSolutions(db, questionDir(config, fresh), fresh.question_id);
    if (fetched) await sleep(Math.floor(Math.random() * 4000));
  });
}

async function runAll(db: DB, config: ReturnType<typeof loadConfig>): Promise<void> {
  await crawl(db, config);
  ensureQuestions(db);
  generateReadme(db, config);
  generateJson(db, config);
}

function runGen(db: DB, config: ReturnType<typeof loadConfig>): void {
  ensureQuestions(db);
  generateReadme(db, config);
  for (const q of allQuestionsOrdered(db)) {
    scanSolutions(db, questionDir(config, q), q.question_id);
  }
  generateJson(db, config);
}

async function main(): Promise<void> {
  if (command === "version") {
    printVersion();
    return;
  }

  if (command !== "all" && command !== "gen") {
    console.error("Usage: 6leetcode [all|gen|version] [-c config.yml]");
    process.exitCode = 1;
    return;
  }

  const config = loadConfig(values.config as string);
  const db = openDb(config.databaseFile);
  try {
    if (command === "all") await runAll(db, config);
    else runGen(db, config);
  } finally {
    db.close();
  }
}

main().catch((err) => {
  logging.error(String(err?.message ?? err));
  process.exitCode = 1;
});
