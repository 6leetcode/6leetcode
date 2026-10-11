import { Database } from "bun:sqlite";

export type DB = Database;

/** A row of the `questions` table (snake_case columns, matching the old GORM schema). */
export interface QuestionRow {
  id: number;
  question_id: number;
  question_frontend_id: string;
  difficulty: string;
  paid_only: number;
  title: string;
  title_slug: string;
  translated_title: string;
  category_title: string;
  total_accepted: string;
  total_submission: string;
  total_accepted_raw: number;
  total_submission_raw: number;
  ac_rate: string;
  code_snippets: string | Uint8Array | null;
  content: string | Uint8Array | null;
  translated_content: string | Uint8Array | null;
  lang_to_valid_playground: string | Uint8Array | null;
  similar_questions: string | Uint8Array | null;
  stats: string | Uint8Array | null;
  topic_tags: string | Uint8Array | null;
}

export interface SolutionRow {
  id: number;
  question_id: number;
  language: string;
  filename: string;
  data: Uint8Array | string | null;
}

/** Keeps the same schema as the previous Go/GORM implementation. */
export function openDb(file: string): DB {
  const db = new Database(file, { create: true });
  db.exec("PRAGMA busy_timeout = 10000;");
  db.exec(`CREATE TABLE IF NOT EXISTS questions (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    created_at datetime, updated_at datetime, deleted_at datetime,
    question_id integer, question_frontend_id text, difficulty text, paid_only numeric,
    title text, title_slug text, translated_title text, category_title text,
    total_accepted text, total_submission text, total_accepted_raw integer, total_submission_raw integer,
    ac_rate text, code_snippets text, content text, translated_content text,
    lang_to_valid_playground text, similar_questions text, stats text, topic_tags text
  );`);
  db.exec("CREATE INDEX IF NOT EXISTS `unique` ON questions(question_frontend_id);");
  db.exec("CREATE INDEX IF NOT EXISTS idx_questions_deleted_at ON questions(deleted_at);");
  db.exec(`CREATE TABLE IF NOT EXISTS solutions (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    created_at datetime, updated_at datetime, deleted_at datetime,
    question_id integer, language text, filename text, data blob
  );`);
  db.exec("CREATE INDEX IF NOT EXISTS idx_solutions_deleted_at ON solutions(deleted_at);");
  return db;
}

export interface SummaryFields {
  question_id: number;
  question_frontend_id: string;
  difficulty: string;
  paid_only: boolean;
  title: string;
  title_slug: string;
  translated_title: string;
  category_title: string;
  totalAccepted: string;
  totalSubmission: string;
  totalAcceptedRaw: number;
  totalSubmissionRaw: number;
  acRate: string;
}

/** Insert-or-update the summary columns (mirrors the old Question.Create). */
export function upsertSummary(db: DB, q: SummaryFields): void {
  const existing = db.query("SELECT id FROM questions WHERE question_id = ?1").get(q.question_id);
  if (!existing) {
    db.run(
      `INSERT INTO questions (question_id, question_frontend_id, difficulty, paid_only, title, title_slug,
        translated_title, category_title, total_accepted, total_submission, total_accepted_raw,
        total_submission_raw, ac_rate, created_at, updated_at)
       VALUES (?1,?2,?3,?4,?5,?6,?7,?8,?9,?10,?11,?12,?13,datetime('now'),datetime('now'))`,
      [q.question_id, q.question_frontend_id, q.difficulty, q.paid_only ? 1 : 0, q.title, q.title_slug,
       q.translated_title, q.category_title, q.totalAccepted, q.totalSubmission, q.totalAcceptedRaw,
       q.totalSubmissionRaw, q.acRate],
    );
    return;
  }
  db.run(
    `UPDATE questions SET question_frontend_id=?2, difficulty=?3, paid_only=?4, title=?5, title_slug=?6,
      translated_title=?7, category_title=?8, total_accepted=?9, total_submission=?10,
      total_accepted_raw=?11, total_submission_raw=?12, ac_rate=?13, updated_at=datetime('now')
     WHERE question_id=?1`,
    [q.question_id, q.question_frontend_id, q.difficulty, q.paid_only ? 1 : 0, q.title, q.title_slug,
     q.translated_title, q.category_title, q.totalAccepted, q.totalSubmission, q.totalAcceptedRaw,
     q.totalSubmissionRaw, q.acRate],
  );
}

export interface ContentFields {
  content: string;
  translated_content: string;
  code_snippets: string;
  lang_to_valid_playground: string;
  similar_questions: string;
  stats: string;
  topic_tags: string;
}

/** Insert-or-update the body/content columns (mirrors the old Question.Create). */
export function saveContent(db: DB, questionId: number, c: ContentFields): void {
  const existing = db.query("SELECT id FROM questions WHERE question_id = ?1").get(questionId);
  if (!existing) {
    db.run(
      `INSERT INTO questions (question_id, content, translated_content, code_snippets,
        lang_to_valid_playground, similar_questions, stats, topic_tags, created_at, updated_at)
       VALUES (?1,?2,?3,?4,?5,?6,?7,?8,datetime('now'),datetime('now'))`,
      [questionId, c.content, c.translated_content, c.code_snippets, c.lang_to_valid_playground,
       c.similar_questions, c.stats, c.topic_tags],
    );
    return;
  }
  db.run(
    `UPDATE questions SET content=?2, translated_content=?3, code_snippets=?4, lang_to_valid_playground=?5,
      similar_questions=?6, stats=?7, topic_tags=?8, updated_at=datetime('now') WHERE question_id=?1`,
    [questionId, c.content, c.translated_content, c.code_snippets, c.lang_to_valid_playground,
     c.similar_questions, c.stats, c.topic_tags],
  );
}

export function hasContent(db: DB, titleSlug: string): boolean {
  const row = db
    .query("SELECT count(*) AS n FROM questions WHERE title_slug = ?1 AND length(content) > 0")
    .get(titleSlug) as { n: number };
  return row.n > 0;
}

export function getBySlug(db: DB, titleSlug: string): QuestionRow | null {
  return (db.query("SELECT * FROM questions WHERE title_slug = ?1").get(titleSlug) as QuestionRow) ?? null;
}

export function totalQuestions(db: DB): number {
  const row = db.query("SELECT count(*) AS n FROM questions").get() as { n: number };
  return row.n;
}

export function allQuestionsOrdered(db: DB): QuestionRow[] {
  return db.query("SELECT * FROM questions ORDER BY id").all() as QuestionRow[];
}

export function questionsByCategory(db: DB, category: string): QuestionRow[] {
  return db.query("SELECT * FROM questions WHERE category_title = ?1 ORDER BY id").all(category) as QuestionRow[];
}

/** Categories in first-appearance order (matches Go's categories()). */
export function categoriesInOrder(db: DB): string[] {
  const rows = db
    .query("SELECT category_title FROM questions GROUP BY category_title ORDER BY min(id)")
    .all() as { category_title: string }[];
  return rows.map((r) => r.category_title);
}

export interface CategoryCount {
  category_title: string;
  num: number;
}

export function categoryCounts(db: DB): CategoryCount[] {
  return db
    .query("SELECT category_title, count(category_title) AS num FROM questions GROUP BY category_title")
    .all() as CategoryCount[];
}

export function deleteSolutionsFor(db: DB, questionId: number): void {
  db.run("DELETE FROM solutions WHERE question_id = ?1", [questionId]);
}

export function solutionCounts(db: DB, questionId: number): Record<string, number> {
  const rows = db
    .query("SELECT language, count(question_id) AS num FROM solutions WHERE question_id = ?1 GROUP BY language")
    .all(questionId) as { language: string; num: number }[];
  const res: Record<string, number> = {};
  for (const r of rows) res[r.language] = r.num;
  return res;
}

export function solutionsFor(db: DB, questionId: number): SolutionRow[] {
  return db.query("SELECT * FROM solutions WHERE question_id = ?1 ORDER BY id").all(questionId) as SolutionRow[];
}

export function insertSolution(db: DB, questionId: number, language: string, filename: string, data: string): void {
  db.run(
    `INSERT INTO solutions (question_id, language, filename, data, created_at, updated_at)
     VALUES (?1,?2,?3,?4,datetime('now'),datetime('now'))`,
    [questionId, language, filename, data],
  );
}

/** Categories that are intentionally not crawled or published. */
export const EXCLUDED_CATEGORIES = ["Concurrency", "Shell", "pandas"];

/** Remove questions (and their solutions) that belong to excluded categories. */
export function pruneExcludedCategories(db: DB): number {
  if (EXCLUDED_CATEGORIES.length === 0) return 0;
  const marks = EXCLUDED_CATEGORIES.map((_, i) => `?${i + 1}`).join(", ");
  const before = totalQuestions(db);
  db.run(`DELETE FROM solutions WHERE question_id IN (SELECT question_id FROM questions WHERE category_title IN (${marks}))`, EXCLUDED_CATEGORIES);
  db.run(`DELETE FROM questions WHERE category_title IN (${marks})`, EXCLUDED_CATEGORIES);
  return before - totalQuestions(db);
}
