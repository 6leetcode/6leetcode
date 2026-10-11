// ------------------------------- solution begin -------------------------------
const isNumber = (s: string): boolean => {
  s = s.trim();
  const n = s.length;
  let i = 0;
  let seenDigit = false;
  let seenDot = false;
  let seenExp = false;
  if (i < n && (s[i] === '+' || s[i] === '-')) i++;
  for (; i < n; i++) {
    const c = s[i];
    if (c >= '0' && c <= '9') {
      seenDigit = true;
    } else if (c === '.') {
      if (seenDot || seenExp) return false;
      seenDot = true;
    } else if (c === 'e' || c === 'E') {
      if (seenExp || !seenDigit) return false;
      seenExp = true;
      seenDigit = false;
      if (i + 1 < n && (s[i + 1] === '+' || s[i + 1] === '-')) i++;
    } else {
      return false;
    }
  }
  return seenDigit;
};
// ------------------------------- solution end ---------------------------------

const input = '2e10';
console.log(`Input:  ${input}`);
console.log(`Output: ${isNumber(input)}`);
