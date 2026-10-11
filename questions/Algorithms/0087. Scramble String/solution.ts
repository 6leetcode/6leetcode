// ------------------------------- solution begin -------------------------------
const isScramble = (s1: string, s2: string): boolean => {
  const check = (a: string, b: string): boolean => {
    if (a === b) return true;
    if (a.length === 1) return false;
    const cnt = new Array(26).fill(0);
    for (let i = 0; i < a.length; i++) {
      cnt[a.charCodeAt(i) - 97]++;
      cnt[b.charCodeAt(i) - 97]--;
    }
    if (cnt.some((c) => c !== 0)) return false;
    const n = a.length;
    for (let i = 1; i < n; i++) {
      if (
        (check(a.slice(0, i), b.slice(0, i)) && check(a.slice(i), b.slice(i))) ||
        (check(a.slice(0, i), b.slice(n - i)) && check(a.slice(i), b.slice(0, n - i)))
      ) {
        return true;
      }
    }
    return false;
  };
  return check(s1, s2);
};
// ------------------------------- solution end ---------------------------------

const s1 = 'great';
const s2 = 'rgeat';
console.log(`Input:  ${s1} ${s2}`);
console.log(`Output: ${isScramble(s1, s2)}`);
