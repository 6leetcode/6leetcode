// ------------------------------- solution begin -------------------------------
const longestWord = (words: string[]): string => {
  const dict = new Set(words);
  words.sort((a, b) => (a.length !== b.length ? b.length - a.length : a.localeCompare(b)));
  const canForm = (w: string): boolean => {
    const n = w.length;
    const dp: boolean[] = new Array(n + 1).fill(false);
    dp[0] = true;
    for (let i = 1; i <= n; i++) {
      for (let j = 0; j < i; j++) {
        if (!dp[j]) continue;
        if (i === n && j === 0) continue;
        if (dict.has(w.slice(j, i))) {
          dp[i] = true;
          break;
        }
      }
    }
    return dp[n];
  };
  for (const w of words) {
    if (canForm(w)) return w;
  }
  return '';
};
// ------------------------------- solution end ---------------------------------

const words = ['cat', 'banana', 'dog', 'nana', 'walk', 'walker', 'dogwalker'];
console.log(`Input:  ["cat","banana","dog","nana","walk","walker","dogwalker"]`);
console.log(`Output: "${longestWord(words)}"`);
