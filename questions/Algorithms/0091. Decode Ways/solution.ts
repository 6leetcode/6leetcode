// ------------------------------- solution begin -------------------------------
const numDecodings = (s: string): number => {
  if (s.length === 0 || s[0] === '0') return 0;
  let pre = 1;
  let cur = 1;
  for (let i = 1; i < s.length; i++) {
    const tmp = cur;
    if (s[i] === '0') {
      if (s[i - 1] === '1' || s[i - 1] === '2') {
        cur = pre;
      } else {
        return 0;
      }
    } else if (s[i - 1] === '1' || (s[i - 1] === '2' && s[i] >= '1' && s[i] <= '6')) {
      cur = cur + pre;
    }
    pre = tmp;
  }
  return cur;
};
// ------------------------------- solution end ---------------------------------

const input = '226';
console.log(`Input:  ${input}`);
console.log(`Output: ${numDecodings(input)}`);
