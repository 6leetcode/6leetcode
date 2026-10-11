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

/** Go's encoding/json HTML-escapes these by default; JSON.stringify does not. */
function marshal(value: unknown): string {
  return JSON.stringify(value).replace(/[<>&\u2028\u2029]/g, (c) => {
    switch (c) {
      case "<":
        return "\\u003c";
      case ">":
        return "\\u003e";
      case "&":
        return "\\u0026";
      case "\u2028":
        return "\\u2028";
      default:
        return "\\u2029";
    }
  });
}

/** []byte fields are base64-encoded in the JSON, matching Go's json.Marshal. */
function b64(value: string | Uint8Array | null): string | null {
  if (value === null || value === undefined) return null;
  return Buffer.from(value as any).toString("base64");
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
    code_snippets: b64(q.code_snippets),
    content: b64(q.content),
    translated_content: b64(q.translated_content),
    lang_to_valid_playground: b64(q.lang_to_valid_playground),
    similar_questions: b64(q.similar_questions),
    stats: b64(q.stats),
    topic_tags: b64(q.topic_tags),
    solutions: sortedSolutions,
  };
}

function solutionJson(s: SolutionRow): Record<string, unknown> {
  return {
    questionId: s.question_id,
    language: s.language,
    filename: s.filename,
    data: b64(s.data),
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
        writeFileSync(`${dir}/${(index + 1) / paging}.json`, marshal(got));
        got = [];
      }
    }
    if (got.length !== 0) {
      writeFileSync(`${dir}/${Math.floor(questions.length / paging) + 1}.json`, marshal(got));
    }
  }

  mkdirSync(config.publicDir, { recursive: true });
  writeFileSync(`${config.publicDir}/index.json`, marshal(categoryCounts(db)));

  const solutionsDir = `${config.publicDir}/solutions`;
  mkdirSync(solutionsDir, { recursive: true });
  for (const q of allQuestionsOrdered(db)) {
    const solutions = solutionsFor(db, q.question_id).map(solutionJson);
    writeFileSync(`${solutionsDir}/${q.question_id}.json`, marshal(solutions));
  }
}
