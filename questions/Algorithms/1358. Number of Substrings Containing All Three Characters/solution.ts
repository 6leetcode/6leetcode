// ------------------------------- solution begin -------------------------------
const numberOfSubstrings = (s: string): number => {
  let a = 0;
  let b = 0;
  let c = 0;
  let l = 0;
  let ans = 0;
  for (let r = 0; r < s.length; r++) {
    if (s[r] === 'a') a++;
    if (s[r] === 'b') b++;
    if (s[r] === 'c') c++;
    while (a > 1 || b > 1 || c > 1) {
      if (s[l] === 'a' && a > 1) {
        a--;
        l++;
      } else if (s[l] === 'b' && b > 1) {
        b--;
        l++;
      } else if (s[l] === 'c' && c > 1) {
        c--;
        l++;
      } else {
        break;
      }
    }
    if (a && b && c) ans += l + 1;
  }
  return ans;
};
// ------------------------------- solution end ---------------------------------

const input = 'abcabc';
console.log(`Input:  ${input}`);
console.log(`Output: ${numberOfSubstrings(input)}`);
