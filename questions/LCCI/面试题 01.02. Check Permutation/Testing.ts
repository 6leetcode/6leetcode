// ------------------------------- solution begin -------------------------------
const CheckPermutation = (s1: string, s2: string): boolean => {
  if (s1.length !== s2.length) return false;
  const count: number[] = new Array(128).fill(0);
  for (let i = 0; i < s1.length; i++) {
    count[s1.charCodeAt(i)]++;
    count[s2.charCodeAt(i)]--;
  }
  return count.every((c) => c === 0);
};
// ------------------------------- solution end ---------------------------------

const s1 = 'abc';
const s2 = 'bca';
console.log(`Input:  ${s1} ${s2}`);
console.log(`Output: ${CheckPermutation(s1, s2)}`);
