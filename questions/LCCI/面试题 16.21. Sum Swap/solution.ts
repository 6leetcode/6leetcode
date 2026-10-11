// ------------------------------- solution begin -------------------------------
const findSwapValues = (array1: number[], array2: number[]): number[] => {
  const sum1 = array1.reduce((a, b) => a + b, 0);
  const sum2 = array2.reduce((a, b) => a + b, 0);
  const diff = sum2 - sum1;
  if (diff % 2 !== 0) return [];
  const target = diff / 2;
  const set2 = new Set(array2);
  for (const x of array1) {
    if (set2.has(x + target)) return [x, x + target];
  }
  return [];
};
// ------------------------------- solution end ---------------------------------

const array1 = [4, 1, 2, 1, 1, 2];
const array2 = [3, 6, 3, 3];
console.log(`Input:  array1 = [${array1.join(', ')}], array2 = [${array2.join(', ')}]`);
console.log(`Output: [${findSwapValues(array1, array2).join(', ')}]`);
