import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const maxArea = (height: number[]): number => {
  let left = 0;
  let right = height.length - 1;
  let best = 0;

  while (left < right) {
    const h = Math.min(height[left], height[right]);
    best = Math.max(best, (right - left) * h);
    if (height[left] < height[right]) left++;
    else right--;
  }

  return best;
};
// ------------------------------- solution end ---------------------------------

const input = [1, 8, 6, 2, 5, 4, 8, 3, 7];
console.log(`Input:  ${array(input)}`);
console.log(`Output: ${maxArea(input)}`);
