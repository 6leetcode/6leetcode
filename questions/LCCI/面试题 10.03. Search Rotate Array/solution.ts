import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const search = (arr: number[], target: number): number => {
  let lo = 0;
  let hi = arr.length - 1;
  let res = -1;
  while (lo <= hi) {
    const mid = lo + Math.floor((hi - lo) / 2);
    if (arr[mid] === target) {
      res = mid;
      hi = mid - 1;
    } else if (arr[mid] > arr[lo]) {
      if (target >= arr[lo] && target < arr[mid]) {
        hi = mid - 1;
      } else {
        lo = mid + 1;
      }
    } else if (arr[mid] < arr[lo]) {
      if (target > arr[mid] && target <= arr[hi]) {
        lo = mid + 1;
      } else {
        hi = mid - 1;
      }
    } else {
      if (arr[lo] !== target) {
        lo++;
      } else {
        res = mid;
        hi = mid - 1;
      }
    }
  }
  return res;
};
// ------------------------------- solution end ---------------------------------

const arr = [15, 16, 19, 20, 25, 1, 3, 4, 5, 7, 10, 14];
console.log(`Input:  ${array(arr)}, target = 5`);
console.log(`Output: ${search(arr, 5)}`);
