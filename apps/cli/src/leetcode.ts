import { logging } from "./log";
import type { DB } from "./db";
import { hasContent, saveContent, upsertSummary, getBySlug, EXCLUDED_CATEGORIES } from "./db";

export const HostLeetcode = "https://leetcode.cn";

const ALL_QUESTIONS_QUERY = `query allQuestions {
  allQuestions {
    ...questionSummaryFields
    __typename
  }
}

fragment questionSummaryFields on QuestionNode {
  title
  titleSlug
  translatedTitle
  questionId
  questionFrontendId
  status
  difficulty
  isPaidOnly
  categoryTitle
  stats
  __typename
}
`;

const QUESTION_DATA_QUERY = `query questionData($titleSlug: String!) {
  question(titleSlug: $titleSlug) {
    questionId
    questionFrontendId
    title
    titleSlug
    content
    translatedTitle
    translatedContent
    isPaidOnly
    difficulty
    similarQuestions
    langToValidPlayground
    topicTags { name slug translatedName __typename }
    codeSnippets { lang langSlug code __typename }
    stats
    status
    __typename
  }
}
`;

const MAX_RETRIES = 8;
const BASE_DELAY_MS = 5000;

const sleep = (ms: number) => new Promise<void>((r) => setTimeout(r, ms));

/**
 * POST to the leetcode GraphQL API.
 *
 * IMPORTANT: do NOT set a custom `user-agent`. leetcode.cn is behind Cloudflare;
 * with its default UA plus a same-origin `referer`, Bun's requests pass, while a
 * spoofed browser UA is answered with a 403 challenge.
 */
async function gql(operationName: string, query: string, variables: Record<string, unknown>): Promise<any> {
  const payload = JSON.stringify({ operationName, variables, query });
  let delay = BASE_DELAY_MS;
  for (let attempt = 0; ; attempt++) {
    let res: Response;
    try {
      res = await fetch(`${HostLeetcode}/graphql`, {
        method: "POST",
        headers: {
          "content-type": "application/json",
          origin: HostLeetcode,
          referer: `${HostLeetcode}/problemset/all/`,
        },
        body: payload,
      });
    } catch (err) {
      if (attempt >= MAX_RETRIES) throw err;
      await sleep(delay);
      delay = Math.min(delay * 2, 60000);
      continue;
    }

    if (res.status === 200) return res.json();

    const retryable = res.status === 429 || res.status >= 500;
    if (!retryable || attempt >= MAX_RETRIES) {
      throw new Error(`leetcode /graphql answered with HTTP ${res.status}`);
    }
    await res.text().catch(() => undefined);
    logging.warn(`leetcode /graphql returned HTTP ${res.status}, retry ${attempt + 1}/${MAX_RETRIES} in ${delay}ms`);
    await sleep(delay);
    delay = Math.min(delay * 2, 60000);
  }
}

interface AllQuestion {
  categoryTitle: string;
  difficulty: string;
  isPaidOnly: boolean;
  questionFrontendId: string;
  questionId: string;
  status: string | null;
  title: string;
  titleSlug: string;
  translatedTitle: string;
  stats: string;
}

interface QuestionStats {
  totalAccepted: string;
  totalSubmission: string;
  totalAcceptedRaw: number;
  totalSubmissionRaw: number;
  acRate: string;
}

/** Fetch the full problem list and store the summary rows. */
export async function allQuestions(db: DB): Promise<void> {
  const json = await gql("allQuestions", ALL_QUESTIONS_QUERY, {});
  const list = (json?.data?.allQuestions ?? []) as AllQuestion[];
  if (list.length === 0) {
    throw new Error("leetcode returned no questions; aborting to avoid wiping generated files");
  }

  for (const q of list) {
    if (EXCLUDED_CATEGORIES.includes(q.categoryTitle)) continue;
    const qid = Number.parseInt(q.questionId, 10);
    if (Number.isNaN(qid)) {
      logging.error(`invalid question id: ${q.questionId}`);
      continue;
    }
    let stats: QuestionStats = {
      totalAccepted: "", totalSubmission: "", totalAcceptedRaw: 0, totalSubmissionRaw: 0, acRate: "",
    };
    try {
      stats = JSON.parse(q.stats || "{}");
    } catch (err) {
      logging.error(String(err));
      continue;
    }

    let title = q.title;
    if (title.endsWith(q.categoryTitle)) {
      title = title.slice(0, title.length - q.categoryTitle.length - 1);
    }

    upsertSummary(db, {
      question_id: qid,
      question_frontend_id: q.questionFrontendId,
      difficulty: q.difficulty,
      paid_only: q.isPaidOnly,
      title,
      title_slug: q.titleSlug,
      translated_title: q.translatedTitle,
      category_title: q.categoryTitle,
      totalAccepted: stats.totalAccepted,
      totalSubmission: stats.totalSubmission,
      totalAcceptedRaw: stats.totalAcceptedRaw,
      totalSubmissionRaw: stats.totalSubmissionRaw,
      acRate: stats.acRate,
    });
  }
}

/** Fetch and store one question's body. Returns false when content is still absent (premium). */
export async function questionData(db: DB, titleSlug: string): Promise<void> {
  const json = await gql("questionData", QUESTION_DATA_QUERY, { titleSlug });
  const q = json?.data?.question;
  if (!q) {
    throw new Error(`leetcode returned no question data for ${titleSlug}`);
  }
  const qid = Number.parseInt(q.questionId, 10);
  if (Number.isNaN(qid)) {
    throw new Error(`invalid question id for ${titleSlug}: ${q.questionId}`);
  }

  saveContent(db, qid, {
    content: q.content ?? "",
    translated_content: q.translatedContent ?? "",
    code_snippets: JSON.stringify(q.codeSnippets ?? []),
    lang_to_valid_playground: q.langToValidPlayground ?? "",
    similar_questions: q.similarQuestions ?? "",
    stats: q.stats ?? "",
    topic_tags: JSON.stringify(q.topicTags ?? []),
  });

  logging.info(`got question ${qid}`);
}

/** Bounded-concurrency async pool. */
export async function runPool<T>(items: T[], limit: number, worker: (item: T) => Promise<void>): Promise<void> {
  let index = 0;
  const runners = Array.from({ length: Math.min(limit, items.length) }, async () => {
    while (index < items.length) {
      const item = items[index++];
      try {
        await worker(item);
      } catch (err) {
        logging.error(String(err));
      }
    }
  });
  await Promise.all(runners);
}

/**
 * Ensure a question has content, fetching it when missing. Returns true when a
 * network request was made (so callers can throttle only real fetches).
 */
export async function ensureQuestionContent(db: DB, titleSlug: string): Promise<boolean> {
  if (!hasContent(db, titleSlug)) {
    await questionData(db, titleSlug);
    return true;
  }
  return false;
}

export { getBySlug };
