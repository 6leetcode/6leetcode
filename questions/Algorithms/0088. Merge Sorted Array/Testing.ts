import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const merge = (nums1: number[], m: number, nums2: number[], n: number): void => {
  let i = m - 1;
  let j = n - 1;
  let k = m + n - 1;
  while (j >= 0) {
    if (i >= 0 && nums1[i] > nums2[j]) {
      nums1[k--] = nums1[i--];
    } else {
      nums1[k--] = nums2[j--];
    }
  }
};
// ------------------------------- solution end ---------------------------------

const input1 = [1, 2, 3, 0, 0, 0];
const input2 = [2, 5, 6];
console.log(`Input:  ${array(input1)} 3 ${array(input2)} 3`);
merge(input1, 3, input2, 3);
console.log(`Output: ${array(input1)}`);
