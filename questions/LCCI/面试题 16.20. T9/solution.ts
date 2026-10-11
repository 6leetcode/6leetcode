// ------------------------------- solution begin -------------------------------
const T9 = (num: string, words: string[]): string[] => {
  const mapping = ['', '', 'abc', 'def', 'ghi', 'jkl', 'mno', 'pqrs', 'tuv', 'wxyz'];
  const res: string[] = [];
  for (const w of words) {
    if (w.length !== num.length) continue;
    let ok = true;
    for (let j = 0; j < w.length; j++) {
      if (!mapping[Number(num[j])].includes(w[j])) {
        ok = false;
        break;
      }
    }
    if (ok) res.push(w);
  }
  return res;
};
// ------------------------------- solution end ---------------------------------

console.log(`Input:  num = "8733", words = ["tree", "used"]`);
console.log(`Output: ${JSON.stringify(T9('8733', ['tree', 'used']))}`);
