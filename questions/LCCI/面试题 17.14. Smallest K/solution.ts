import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const smallestK = (arr: number[], k: number): number[] => {
  arr.sort((a, b) => a - b);
  return arr.slice(0, k);
};
// ------------------------------- solution end ---------------------------------

const arr = [1, 3, 5, 7, 2, 4, 6, 8];
console.log(`Input:  ${array(arr)}, k = 4`);
console.log(`Output: ${array(smallestK(arr, 4))}`);
