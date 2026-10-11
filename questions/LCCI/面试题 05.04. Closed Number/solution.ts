// ------------------------------- solution begin -------------------------------
const findClosedNumbers = (num: number): number[] => {
  const nextBigger = (n: number): number => {
    let c = n;
    let c0 = 0;
    let c1 = 0;
    while (c !== 0 && (c & 1) === 0) {
      c0++;
      c >>= 1;
    }
    while ((c & 1) === 1) {
      c1++;
      c >>= 1;
    }
    if (c0 + c1 >= 31) return -1;
    const p = c0 + c1;
    n |= 1 << p;
    n &= ~((1 << p) - 1);
    n |= (1 << (c1 - 1)) - 1;
    return n;
  };
  const nextSmaller = (n: number): number => {
    let c = n;
    let c0 = 0;
    let c1 = 0;
    while ((c & 1) === 1) {
      c1++;
      c >>= 1;
    }
    if (c === 0) return -1;
    while (c !== 0 && (c & 1) === 0) {
      c0++;
      c >>= 1;
    }
    const p = c0 + c1;
    n &= ~((1 << (p + 1)) - 1);
    n |= ((1 << (c1 + 1)) - 1) << (c0 - 1);
    return n;
  };
  return [nextBigger(num), nextSmaller(num)];
};
// ------------------------------- solution end ---------------------------------

const input = 2;
console.log(`Input:  ${input}`);
console.log(`Output: [${findClosedNumbers(input).join(', ')}]`);
