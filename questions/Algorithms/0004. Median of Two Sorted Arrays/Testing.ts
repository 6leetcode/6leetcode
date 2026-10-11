import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const findMedianSortedArrays = (nums1: number[], nums2: number[]): number => {
  const merged = [...nums1, ...nums2].sort((a, b) => a - b);
  const length = merged.length;

  if (length % 2 === 0) {
    return (merged[length / 2 - 1] + merged[length / 2]) / 2;
  }
  return merged[Math.floor(length / 2)];
};
// ------------------------------- solution end ---------------------------------

const input1 = [1, 3];
const input2 = [2];
console.log(`Input:  ${array(input1)}, ${array(input2)}`);
console.log(`Output: ${findMedianSortedArrays(input1, input2)}`);
