// ------------------------------- solution begin -------------------------------
const canWin = (s: string): boolean => {
  for (let i = 1; i < s.length; i++) {
    if (s[i] === '+' && s[i - 1] === '+') {
      if (!canWin(s.slice(0, i - 1) + '--' + s.slice(i + 1))) return true;
    }
  }
  return false;
};
// ------------------------------- solution end ---------------------------------

const input = '++++';
console.log(`Input:  ${input}`);
console.log(`Output: ${canWin(input)}`);
