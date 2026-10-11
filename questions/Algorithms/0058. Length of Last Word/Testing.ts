// ------------------------------- solution begin -------------------------------
const lengthOfLastWord = (s: string): number => {
  let end = s.length - 1;
  while (end >= 0 && s[end] === ' ') end--;
  let start = end;
  while (start >= 0 && s[start] !== ' ') start--;
  return end - start;
};
// ------------------------------- solution end ---------------------------------

const input = 'Hello World';
console.log(`Input:  ${input}`);
console.log(`Output: ${lengthOfLastWord(input)}`);
