import array from '../../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const smallestDifference = (a: number[], b: number[]): number => {
  a.sort((x, y) => x - y);
  b.sort((x, y) => x - y);
  let i = 0;
  let j = 0;
  let best = Infinity;
  while (i < a.length && j < b.length) {
    best = Math.min(best, Math.abs(a[i] - b[j]));
    if (a[i] < b[j]) i++;
    else j++;
  }
  return best;
};
// ------------------------------- solution end ---------------------------------

const a = [1, 3, 15, 11, 2];
const b = [23, 127, 235, 19, 8];
console.log(`Input:  ${array(a)}, ${array(b)}`);
console.log(`Output: ${smallestDifference(a, b)}`);
