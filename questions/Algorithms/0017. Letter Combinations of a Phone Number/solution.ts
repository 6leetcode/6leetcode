// ------------------------------- solution begin -------------------------------
const letterCombinations = (digits: string): string[] => {
  if (digits.length === 0) return [];
  const map = ['abc', 'def', 'ghi', 'jkl', 'mno', 'pqrs', 'tuv', 'wxyz'];
  let res: string[] = [''];

  for (const d of digits) {
    const letters = map[Number(d) - 2];
    const next: string[] = [];
    for (const prefix of res) {
      for (const c of letters) {
        next.push(prefix + c);
      }
    }
    res = next;
  }

  return res;
};
// ------------------------------- solution end ---------------------------------

const input = '23';
console.log(`Input:  ${input}`);
console.log(`Output: [${letterCombinations(input).join(' ')}]`);
