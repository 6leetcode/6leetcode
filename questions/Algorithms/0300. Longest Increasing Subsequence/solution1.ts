import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const lengthOfLIS = (nums: number[]): number => {
  const n = nums.length;
  if (n === 0) return 0;
  const dp = new Array<number>(n).fill(1);
  let maxLen = 1;
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < i; j++) {
      if (nums[i] > nums[j]) {
        dp[i] = Math.max(dp[i], dp[j] + 1);
      }
    }
    maxLen = Math.max(maxLen, dp[i]);
  }
  return maxLen;
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
