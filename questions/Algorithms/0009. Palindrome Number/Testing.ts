// ------------------------------- solution begin -------------------------------
const isPalindrome = (x: number): boolean => {
  if (x < 0) return false;
  return String(x) === String(x).split('').reverse().join('');
};
// ------------------------------- solution end ---------------------------------

const input = 121;
console.log(`Input:  ${input}`);
console.log(`Output: ${isPalindrome(input)}`);
