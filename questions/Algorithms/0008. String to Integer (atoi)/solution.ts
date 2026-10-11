// ------------------------------- solution begin -------------------------------
const myAtoi = (s: string): number => {
  const MAX = 2 ** 31 - 1;
  const MIN = -(2 ** 31);

  let i = 0;
  const n = s.length;
  while (i < n && s[i] === ' ') i++;

  let sign = 1;
  if (i < n && (s[i] === '+' || s[i] === '-')) {
    if (s[i] === '-') sign = -1;
    i++;
  }

  let num = 0;
  while (i < n && s[i] >= '0' && s[i] <= '9') {
    num = num * 10 + Number(s[i]);
    if (sign === 1 && num > MAX) return MAX;
    if (sign === -1 && -num < MIN) return MIN;
    i++;
  }

  return sign * num;
};
// ------------------------------- solution end ---------------------------------

const input = ' -42';
console.log(`Input:  ${input}`);
console.log(`Output: ${myAtoi(input)}`);
