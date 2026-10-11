import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const trap = (height: number[]): number => {
  let l = 0;
  let r = height.length - 1;
  let lmax = 0;
  let rmax = 0;
  let res = 0;
  while (l < r) {
    if (height[l] < height[r]) {
      if (height[l] >= lmax) lmax = height[l];
      else res += lmax - height[l];
      l++;
    } else {
      if (height[r] >= rmax) rmax = height[r];
      else res += rmax - height[r];
      r--;
    }
  }
  return res;
};
// ------------------------------- solution end ---------------------------------

const height = [0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1];
console.log(`Input:  ${array(height)}`);
console.log(`Output: ${trap(height)}`);
