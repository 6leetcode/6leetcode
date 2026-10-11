import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const removeElement = (nums: number[], val: number): number => {
  let i = 0;
  for (let j = 0; j < nums.length; j++) {
    if (nums[j] !== val) {
      nums[i] = nums[j];
      i++;
    }
  }
  return i;
};
// ------------------------------- solution end ---------------------------------

const input1 = [3, 2, 2, 3];
const input2 = 3;
console.log(`Input:  ${array(input1)} ${input2}`);
const k = removeElement(input1, input2);
console.log(`Output: ${k}, ${array(input1.slice(0, k))}`);
