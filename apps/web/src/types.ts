export interface IQuestion {
  title: string;
  translated_title: string;
  question_id: number;
  question_frontend_id: string;
  difficulty: string;
  paid_only: boolean;
  title_slug: string;
  category_title: string;
  acRate: string;
  translated_content: string;
  content: string;
  solutions: Map<string, number>;

  solutions_list: Array<string>;
}

export interface ISolution {
  questionId: number;
  data: string;
  language: string;
  filename: string;
};

export const LanguagesDefinition = [
  { "language": "C", "suffix": ".c" },
  { "language": "CPP", "suffix": ".cc" },
  { "language": "Go", "suffix": ".go" },
  { "language": "Java", "suffix": ".java" },
  { "language": "TypeScript", "suffix": ".ts" },
  { "language": "PHP", "suffix": ".php" },
  { "language": "Python", "suffix": ".py" },
  { "language": "Rust", "suffix": ".rs" },
  { "language": "SQL", "suffix": ".sql" },
  { "language": "Bash", "suffix": ".sh" },
];
