// ------------------------------- solution begin -------------------------------
const isPalindrome = (s: string): boolean => {
  let left = 0;
  let right = s.length - 1;

  const isAlnum = (c: string): boolean => /[a-zA-Z0-9]/.test(c);

  while (left < right) {
    while (left < right && !isAlnum(s[left])) {
      left++;
    }
    while (left < right && !isAlnum(s[right])) {
      right--;
    }
    if (s[left].toLowerCase() !== s[right].toLowerCase()) {
      return false;
    }
    left++;
    right--;
  }

  return true;
};
// ------------------------------- solution end ---------------------------------

const inputs = ["A man, a plan, a canal: Panama", "race a car", " ", "0P"];

for (const s of inputs) {
  console.log(`Input:  "${s}"`);
  console.log(`Output: ${isPalindrome(s)}`);
}
