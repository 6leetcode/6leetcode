import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const lengthOfLIS = (nums: number[]): number => {
  const tails: number[] = [];
  for (const num of nums) {
    let lo = 0;
    let hi = tails.length;
    while (lo < hi) {
      const mid = (lo + hi) >> 1;
      if (tails[mid] < num) {
        lo = mid + 1;
      } else {
        hi = mid;
      }
    }
    if (lo === tails.length) tails.push(num);
    else tails[lo] = num;
  }
  return tails.length;
};
// ------------------------------- solution end ---------------------------------

const inputs = [
  [10, 9, 2, 5, 3, 7, 101, 18],
  [0, 1, 0, 3, 2, 3],
  [7, 7, 7, 7, 7],
];
for (const input of inputs) {
  console.log(`Input:  ${array(input)}`);
  console.log(`Output: ${lengthOfLIS(input)}`);
}
