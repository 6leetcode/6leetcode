import i18n from "i18next";
import { initReactI18next } from "react-i18next";

export const resources = {
  "zh-CN": {
    "translation": {
      "difficulty.Easy": "简单",
      "difficulty.Hard": "困难",
      "difficulty.Medium": "中等",
      "title.Question": "题目",
      "title.Pay": "付费",
      "title.Difficulty": "难度",
      "title.AcRate": "通过率",
    },
  },
  "en-US": {
    "translation": {
      "difficulty.Easy": "Easy",
      "difficulty.Hard": "Hard",
      "difficulty.Medium": "Medium",
      "title.Question": "Question",
      "title.Pay": "Pay",
      "title.Difficulty": "Difficulty",
      "title.AcRate": "Ac Rate",
    },
  },
};

export const languages = [
  {
    "name": "zh-CN",
    "text": "中文",
  },
  {
    "name": "en-US",
    "text": "English",
  },
];

i18n.use(initReactI18next)
  .init({
    resources,
    lng: Object.keys(resources)[0],
    keySeparator: false,
    interpolation: {
      escapeValue: false,
    },
  });

export default i18n;
