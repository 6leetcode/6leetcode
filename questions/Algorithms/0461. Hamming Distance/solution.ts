// ------------------------------- solution begin -------------------------------
const hammingDistance = (x: number, y: number): number => {
  let v = x ^ y;
  let count = 0;
  while (v) {
    count += v & 1;
    v >>>= 1;
  }
  return count;
};
// ------------------------------- solution end ---------------------------------

const input1 = 1;
const input2 = 4;
console.log(`Input:  ${input1}, ${input2}`);
console.log(`Output: ${hammingDistance(input1, input2)}`);
