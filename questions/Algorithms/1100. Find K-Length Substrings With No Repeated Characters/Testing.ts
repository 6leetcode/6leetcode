// ------------------------------- solution begin -------------------------------
const numKLenSubstrNoRepeats = (S: string, k: number): number => {
  const n = S.length;
  if (n < k) return 0;
  const count = new Array(26).fill(0);
  let distinct = 0;
  let ans = 0;
  for (let i = 0; i < n; i++) {
    const idx = S.charCodeAt(i) - 97;
    if (count[idx] === 0) distinct++;
    count[idx]++;
    if (i >= k) {
      const rm = S.charCodeAt(i - k) - 97;
      count[rm]--;
      if (count[rm] === 0) distinct--;
    }
    if (i >= k - 1 && distinct === k) ans++;
  }
  return ans;
};
// ------------------------------- solution end ---------------------------------

const input1 = 'havefunonleetcode';
const input2 = 5;
console.log(`Input:  ${input1} ${input2}`);
console.log(`Output: ${numKLenSubstrNoRepeats(input1, input2)}`);
