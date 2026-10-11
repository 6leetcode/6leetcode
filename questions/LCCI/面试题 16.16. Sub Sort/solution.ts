import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const subSort = (arr: number[]): number[] => {
  let m = -1;
  let n = -1;
  let mx = arr[0];
  for (let i = 1; i < arr.length; i++) {
    if (arr[i] < mx) n = i;
    else mx = arr[i];
  }
  let mn = arr[arr.length - 1];
  for (let i = arr.length - 2; i >= 0; i--) {
    if (arr[i] > mn) m = i;
    else mn = arr[i];
  }
  return [m, n];
};
// ------------------------------- solution end ---------------------------------

const input = [1, 2, 4, 7, 10, 11, 7, 12, 6, 7, 16, 18, 19];
console.log(`Input:  ${array(input)}`);
console.log(`Output: ${array(subSort(input))}`);
