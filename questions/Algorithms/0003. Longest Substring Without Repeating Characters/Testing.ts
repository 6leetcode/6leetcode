// ------------------------------- solution begin -------------------------------
const lengthOfLongestSubstring = (s: string): number => {
  const last = new Map<string, number>();
  let start = 0;
  let result = 0;

  for (let i = 0; i < s.length; i++) {
    const ch = s[i];
    if (last.has(ch) && (last.get(ch) as number) >= start) {
      start = (last.get(ch) as number) + 1;
    }
    last.set(ch, i);
    result = Math.max(result, i - start + 1);
  }

  return result;
};
// ------------------------------- solution end ---------------------------------

const input = 'abcabcbb';
console.log(`Input:  ${input}`);
console.log(`Output: ${lengthOfLongestSubstring(input)}`);
