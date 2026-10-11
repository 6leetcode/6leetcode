import matrix from '../../library/typescript/matrix';

// ------------------------------- solution begin -------------------------------
const insert = (intervals: number[][], newInterval: number[]): number[][] => {
  const res: number[][] = [];
  let i = 0;
  while (i < intervals.length && intervals[i][1] < newInterval[0]) {
    res.push(intervals[i]);
    i++;
  }
  let lo = newInterval[0];
  let hi = newInterval[1];
  while (i < intervals.length && intervals[i][0] <= hi) {
    lo = Math.min(lo, intervals[i][0]);
    hi = Math.max(hi, intervals[i][1]);
    i++;
  }
  res.push([lo, hi]);
  while (i < intervals.length) {
    res.push(intervals[i]);
    i++;
  }
  return res;
};
// ------------------------------- solution end ---------------------------------

const input1 = [
  [1, 3],
  [6, 9],
];
const input2 = [2, 5];
console.log(`Input:  ${matrix(input1)} [${input2.join(', ')}]`);
console.log(`Output: ${matrix(insert(input1, input2))}`);
