import { mkdirSync, writeFileSync } from "node:fs";
import type { Config } from "./config";
import type { DB, QuestionRow, SolutionRow } from "./db";
import {
  allQuestionsOrdered,
  categoriesInOrder,
  categoryCounts,
  questionsByCategory,
  solutionCounts,
  solutionsFor,
} from "./db";

const paging = 50;

/**
 * Body/code columns come back as Uint8Array (BLOB) or string. Emit them as plain
 * UTF-8 text — no base64 — which keeps the JSON much smaller once gzipped and
 * lets the frontend use the value directly.
 */
function toText(value: string | Uint8Array | null): string | null {
  if (value === null || value === undefined) return null;
  return typeof value === "string" ? value : Buffer.from(value).toString("utf8");
}

function questionJson(q: QuestionRow, solutions: Record<string, number>): Record<string, unknown> {
  const sortedSolutions: Record<string, number> = {};
  for (const key of Object.keys(solutions).sort()) sortedSolutions[key] = solutions[key];

  return {
    question_id: q.question_id,
    question_frontend_id: q.question_frontend_id,
    difficulty: q.difficulty,
    paid_only: Boolean(q.paid_only),
    title: q.title,
    title_slug: q.title_slug,
    translated_title: q.translated_title,
    category_title: q.category_title,
    totalAccepted: q.total_accepted,
    totalSubmission: q.total_submission,
    totalAcceptedRaw: q.total_accepted_raw,
    totalSubmissionRaw: q.total_submission_raw,
    acRate: q.ac_rate,
    code_snippets: toText(q.code_snippets),
    content: toText(q.content),
    translated_content: toText(q.translated_content),
    lang_to_valid_playground: toText(q.lang_to_valid_playground),
    similar_questions: toText(q.similar_questions),
    stats: toText(q.stats),
    topic_tags: toText(q.topic_tags),
    solutions: sortedSolutions,
  };
}

function solutionJson(s: SolutionRow): Record<string, unknown> {
  return {
    questionId: s.question_id,
    language: s.language,
    filename: s.filename,
    data: toText(s.data),
  };
}

function questionsForCategory(db: DB, category: string): QuestionRow[] {
  return category === "All" ? allQuestionsOrdered(db) : questionsByCategory(db, category);
}

export function generateJson(db: DB, config: Config): void {
  const categories = [...categoriesInOrder(db), "All"];
  for (const category of categories) {
    const questions = questionsForCategory(db, category);
    const dir = `${config.publicDir}/questions/${category}`;
    mkdirSync(dir, { recursive: true });

    let got: Record<string, unknown>[] = [];
    for (let index = 0; index < questions.length; index++) {
      const q = questions[index];
      got.push(questionJson(q, solutionCounts(db, q.question_id)));
      if (index !== 0 && (index + 1) % paging === 0) {
        writeFileSync(`${dir}/${(index + 1) / paging}.json`, JSON.stringify(got));
        got = [];
      }
    }
    if (got.length !== 0) {
      writeFileSync(`${dir}/${Math.floor(questions.length / paging) + 1}.json`, JSON.stringify(got));
    }
  }

  mkdirSync(config.publicDir, { recursive: true });
  writeFileSync(`${config.publicDir}/index.json`, JSON.stringify(categoryCounts(db)));

  const solutionsDir = `${config.publicDir}/solutions`;
  mkdirSync(solutionsDir, { recursive: true });
  for (const q of allQuestionsOrdered(db)) {
    const solutions = solutionsFor(db, q.question_id).map(solutionJson);
    writeFileSync(`${solutionsDir}/${q.question_id}.json`, JSON.stringify(solutions));
  }
}
