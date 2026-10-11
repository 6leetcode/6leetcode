// ------------------------------- solution begin -------------------------------
const detectCapitalUse = (word: string): boolean => {
  let upper = 0;
  for (const c of word) if (c >= 'A' && c <= 'Z') upper++;
  const lower = word.length - upper;
  return (
    upper === word.length ||
    lower === word.length ||
    (upper === 1 && word[0] >= 'A' && word[0] <= 'Z')
  );
};
// ------------------------------- solution end ---------------------------------

const input = 'Google';
console.log(`Input:  ${input}`);
console.log(`Output: ${detectCapitalUse(input)}`);
