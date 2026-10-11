import matrix from '../../library/typescript/matrix';

// ------------------------------- solution begin -------------------------------
const kClosest = (points: number[][], K: number): number[][] => {
  points.sort((a, b) => a[0] * a[0] + a[1] * a[1] - (b[0] * b[0] + b[1] * b[1]));
  return points.slice(0, K);
};
// ------------------------------- solution end ---------------------------------

const input1 = [
  [3, 3],
  [5, -1],
  [-2, 4],
];
const input2 = 2;
console.log(`Input:  ${matrix(input1)} ${input2}`);
console.log(`Output: ${matrix(kClosest(input1, input2))}`);
