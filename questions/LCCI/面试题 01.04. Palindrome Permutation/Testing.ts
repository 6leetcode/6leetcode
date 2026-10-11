// ------------------------------- solution begin -------------------------------
const canPermutePalindrome = (s: string): boolean => {
  const count: number[] = new Array(128).fill(0);
  for (const c of s) count[c.charCodeAt(0)] ^= 1;
  return count.reduce((a, b) => a + b, 0) <= 1;
};
// ------------------------------- solution end ---------------------------------

const input = 'tactcoa';
console.log(`Input:  ${input}`);
console.log(`Output: ${canPermutePalindrome(input)}`);
