// ------------------------------- solution begin -------------------------------
const generatePossibleNextMoves = (s: string): string[] => {
  const res: string[] = [];
  for (let i = 0; i + 1 < s.length; i++) {
    if (s[i] === '+' && s[i + 1] === '+') {
      res.push(s.slice(0, i) + '--' + s.slice(i + 2));
    }
  }
  return res;
};
// ------------------------------- solution end ---------------------------------

const input = '++++';
console.log(`Input:  ${input}`);
console.log(`Output: [${generatePossibleNextMoves(input).join(', ')}]`);
