// ------------------------------- solution begin -------------------------------
const getPermutation = (n: number, k: number): string => {
  const fact: number[] = new Array(n + 1).fill(1);
  for (let i = 1; i <= n; i++) fact[i] = fact[i - 1] * i;
  const nums: string[] = [];
  for (let i = 1; i <= n; i++) nums.push(String(i));
  let res = '';
  k--;
  for (let i = n; i >= 1; i--) {
    const idx = Math.floor(k / fact[i - 1]);
    res += nums.splice(idx, 1)[0];
    k %= fact[i - 1];
  }
  return res;
};
// ------------------------------- solution end ---------------------------------

const n = 3;
const k = 3;
console.log(`Input:  ${n} ${k}`);
console.log(`Output: ${getPermutation(n, k)}`);
