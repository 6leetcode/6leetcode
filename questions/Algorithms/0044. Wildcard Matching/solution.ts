// ------------------------------- solution begin -------------------------------
const isMatch = (s: string, p: string): boolean => {
  let sIdx = 0;
  let pIdx = 0;
  let match = 0;
  let star = -1;
  while (sIdx < s.length) {
    if (pIdx < p.length && (p[pIdx] === '?' || p[pIdx] === s[sIdx])) {
      sIdx++;
      pIdx++;
    } else if (pIdx < p.length && p[pIdx] === '*') {
      star = pIdx;
      match = sIdx;
      pIdx++;
    } else if (star !== -1) {
      pIdx = star + 1;
      match++;
      sIdx = match;
    } else {
      return false;
    }
  }
  while (pIdx < p.length && p[pIdx] === '*') pIdx++;
  return pIdx === p.length;
};
// ------------------------------- solution end ---------------------------------

const input1 = 'aa';
const input2 = '*';
console.log(`Input:  ${input1} ${input2}`);
console.log(`Output: ${isMatch(input1, input2)}`);
