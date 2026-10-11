// ------------------------------- solution begin -------------------------------
const countBinarySubstrings = (s: string): number => {
  let n = 0;
  let pre = 0;
  let curr = 1;
  for (let i = 0; i < s.length - 1; i++) {
    if (s[i] === s[i + 1]) {
      curr++;
    } else {
      pre = curr;
      curr = 1;
    }
    if (pre >= curr) n++;
  }
  return n;
};
// ------------------------------- solution end ---------------------------------

const input = '00110011';
console.log(`Input:  ${input}`);
console.log(`Output: ${countBinarySubstrings(input)}`);
