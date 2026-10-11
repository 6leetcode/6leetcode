import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const countSmaller = (nums: number[]): number[] => {
  const res: number[] = [];
  for (let i = 0; i < nums.length; i++) {
    let count = 0;
    for (let j = i + 1; j < nums.length; j++) {
      if (nums[j] < nums[i]) count++;
    }
    res.push(count);
  }
  return res;
};
// ------------------------------- solution end ---------------------------------

const input = [5, 2, 6, 1];
console.log(`Input:  ${array(input)}`);
console.log(`Output: ${array(countSmaller(input))}`);
