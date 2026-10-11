// ------------------------------- solution begin -------------------------------
const calculate = (s: string): number => {
  let result = 0;
  let prev = 0;
  let cur = 0;
  let op = '+';
  const n = s.length;
  for (let i = 0; i <= n; i++) {
    if (i < n && s[i] >= '0' && s[i] <= '9') {
      cur = cur * 10 + (s.charCodeAt(i) - 48);
    } else if (i === n || s[i] !== ' ') {
      if (op === '+') {
        result += prev;
        prev = cur;
      } else if (op === '-') {
        result += prev;
        prev = -cur;
      } else if (op === '*') {
        prev *= cur;
      } else if (op === '/') {
        prev = Math.trunc(prev / cur);
      }
      if (i < n) op = s[i];
      cur = 0;
    }
  }
  return result + prev;
};
// ------------------------------- solution end ---------------------------------

const input = '3+2*2';
console.log(`Input:  "${input}"`);
console.log(`Output: ${calculate(input)}`);
