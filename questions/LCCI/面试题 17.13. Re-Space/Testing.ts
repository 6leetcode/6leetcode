// ------------------------------- solution begin -------------------------------
const respace = (dictionary: string[], sentence: string): number => {
  const n = sentence.length;
  const dp: number[] = new Array(n + 1).fill(0);
  for (let i = 1; i <= n; i++) {
    dp[i] = dp[i - 1] + 1;
    for (const w of dictionary) {
      const wl = w.length;
      if (i >= wl && sentence.slice(i - wl, i) === w) {
        dp[i] = Math.min(dp[i], dp[i - wl]);
      }
    }
  }
  return dp[n];
};
// ------------------------------- solution end ---------------------------------

const dictionary = ['looked', 'just', 'like', 'her', 'brother'];
const sentence = 'jesslookedjustliketimherbrother';
console.log(`Input:  dictionary = [looked, just, like, her, brother], sentence = "${sentence}"`);
console.log(`Output: ${respace(dictionary, sentence)}`);
