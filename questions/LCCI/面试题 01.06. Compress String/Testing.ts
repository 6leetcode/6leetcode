// ------------------------------- solution begin -------------------------------
const compressString = (S: string): string => {
  let res = '';
  const n = S.length;
  let i = 0;
  while (i < n) {
    let j = i;
    while (j < n && S[j] === S[i]) j++;
    res += S[i] + String(j - i);
    i = j;
  }
  return res.length < S.length ? res : S;
};
// ------------------------------- solution end ---------------------------------

const input = 'aabcccccaaa';
console.log(`Input:  ${input}`);
console.log(`Output: ${compressString(input)}`);
