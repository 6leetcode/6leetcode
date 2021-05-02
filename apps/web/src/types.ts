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
}

export interface ISolution {
  questionId: number;
  data: string;
  language: string;
  filename: string;
};
