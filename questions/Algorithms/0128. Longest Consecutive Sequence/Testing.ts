import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const longestConsecutive = (nums: number[]): number => {
  const set = new Set<number>(nums);
  let best = 0;

  for (const num of set) {
    if (!set.has(num - 1)) {
      let cur = num;
      let len = 1;
      while (set.has(cur + 1)) {
        cur++;
        len++;
      }
      if (len > best) best = len;
    }
  }

  return best;
};
// ------------------------------- solution end ---------------------------------

const tests = [
  [100, 4, 200, 1, 3, 2],
  [0, 3, 7, 2, 5, 8, 4, 6, 0, 1],
  [1, 0, 1, 2],
];

for (const nums of tests) {
  console.log(`Input:  ${array(nums)}`);
  console.log(`Output: ${longestConsecutive(nums)}`);
}
