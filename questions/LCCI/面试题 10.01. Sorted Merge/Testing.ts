// ------------------------------- solution begin -------------------------------
const merge = (A: number[], m: number, B: number[], n: number): void => {
  let i = m - 1;
  let j = n - 1;
  let k = m + n - 1;
  while (j >= 0) {
    if (i >= 0 && A[i] > B[j]) {
      A[k--] = A[i--];
    } else {
      A[k--] = B[j--];
    }
  }
};
// ------------------------------- solution end ---------------------------------

const A = [1, 2, 3, 0, 0, 0];
const B = [2, 5, 6];
console.log(`Input:  A = [${A.join(', ')}], m = 3; B = [${B.join(', ')}], n = 3`);
merge(A, 3, B, 3);
console.log(`Output: [${A.join(', ')}]`);
