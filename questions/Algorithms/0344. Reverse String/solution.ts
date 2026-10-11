// ------------------------------- solution begin -------------------------------
const reverseString = (s: string[]): void => {
  for (let i = 0, j = s.length - 1; i < j; i++, j--) {
    [s[i], s[j]] = [s[j], s[i]];
  }
};
// ------------------------------- solution end ---------------------------------

const input = ['h', 'e', 'l', 'l', 'o'];
console.log(`Input:  ${input.join('')}`);
reverseString(input);
console.log(`Output: ${input.join('')}`);
