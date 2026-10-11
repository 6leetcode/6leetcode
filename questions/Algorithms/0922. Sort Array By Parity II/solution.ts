import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const sortArrayByParityII = (A: number[]): number[] => {
  const n = A.length;
  const ans: number[] = new Array(n).fill(0);
  let i = 0;
  for (const x of A) {
    if (x % 2 === 0) {
      ans[i] = x;
      i += 2;
    }
  }
  i = 1;
  for (const x of A) {
    if (x % 2 === 1) {
      ans[i] = x;
      i += 2;
    }
  }
  return ans;
};
// ------------------------------- solution end ---------------------------------

const input = [4, 2, 5, 7];
console.log(`Input:  ${array(input)}`);
console.log(`Output: ${array(sortArrayByParityII(input))}`);
