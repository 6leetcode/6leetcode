import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const grayCode = (n: number): number[] => {
  const res: number[] = [];
  for (let i = 0; i < 1 << n; i++) res.push((i >> 1) ^ i);
  return res;
};
// ------------------------------- solution end ---------------------------------

const input = 2;
console.log(`Input:  ${input}`);
console.log(`Output: ${array(grayCode(input))}`);
