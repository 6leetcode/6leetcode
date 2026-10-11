// ------------------------------- solution begin -------------------------------
const findSubstring = (s: string, words: string[]): number[] => {
  const res: number[] = [];
  if (words.length === 0 || s.length === 0) return res;
  const w = words[0].length;
  const total = w * words.length;
  for (let i = 0; i + total <= s.length; i++) {
    const used = new Array(words.length).fill(false);
    let ok = true;
    for (let j = 0; j < words.length && ok; j++) {
      let found = false;
      for (let t = 0; t < words.length; t++) {
        if (!used[t] && s.slice(i + j * w, i + (j + 1) * w) === words[t]) {
          used[t] = true;
          found = true;
          break;
        }
      }
      ok = found;
    }
    if (ok) res.push(i);
  }
  return res;
};
// ------------------------------- solution end ---------------------------------

const input1 = 'barfoothefoobarman';
const input2 = ['foo', 'bar'];
console.log(`Input:  ${input1} [${input2.join(', ')}]`);
console.log(`Output: ${JSON.stringify(findSubstring(input1, input2))}`);
