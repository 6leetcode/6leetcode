// ------------------------------- solution begin -------------------------------
const longestPalindrome = (s: string): string => {
  if (s.length < 2) return s;
  let start = 0;
  let end = 0;

  const expand = (l: number, r: number): number => {
    while (l >= 0 && r < s.length && s[l] === s[r]) {
      l--;
      r++;
    }
    return r - l - 1;
  };

  for (let i = 0; i < s.length; i++) {
    const len = Math.max(expand(i, i), expand(i, i + 1));
    if (len > end - start) {
      start = i - Math.floor((len - 1) / 2);
      end = i + Math.floor(len / 2);
    }
  }

  return s.substring(start, end + 1);
};
// ------------------------------- solution end ---------------------------------

const input = 'babad';
console.log(`Input:  ${input}`);
console.log(`Output: ${longestPalindrome(input)}`);
