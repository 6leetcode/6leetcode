// ------------------------------- solution begin -------------------------------
const romanToInt = (s: string): number => {
  const value: Record<string, number> = { I: 1, V: 5, X: 10, L: 50, C: 100, D: 500, M: 1000 };
  let result = 0;

  for (let i = 0; i < s.length; i++) {
    const curr = value[s[i]];
    if (i + 1 < s.length && curr < value[s[i + 1]]) {
      result -= curr;
    } else {
      result += curr;
    }
  }

  return result;
};
// ------------------------------- solution end ---------------------------------

const input = 'MCMXCIV';
console.log(`Input:  ${input}`);
console.log(`Output: ${romanToInt(input)}`);
