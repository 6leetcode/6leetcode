// ------------------------------- solution begin -------------------------------
const isMatch = (s: string, p: string): boolean => {
  if (p.length === 0) return s.length === 0;

  const firstMatch = s.length > 0 && (s[0] === p[0] || p[0] === '.');

  if (p.length >= 2 && p[1] === '*') {
    return isMatch(s, p.substring(2)) || (firstMatch && isMatch(s.substring(1), p));
  }
  return firstMatch && isMatch(s.substring(1), p.substring(1));
};
// ------------------------------- solution end ---------------------------------

const input1 = 'aab';
const input2 = 'c*a*b';
console.log(`Input:  ${input1} ${input2}`);
console.log(`Output: ${isMatch(input1, input2)}`);
