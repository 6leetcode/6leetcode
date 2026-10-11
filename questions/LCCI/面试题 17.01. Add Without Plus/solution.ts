// ------------------------------- solution begin -------------------------------
const add = (a: number, b: number): number => {
  while (b !== 0) {
    const sum = a ^ b;
    const carry = (a & b) << 1;
    a = sum;
    b = carry;
  }
  return a;
};
// ------------------------------- solution end ---------------------------------

const input1 = -1;
const input2 = 2;
console.log(`Input:  ${input1} ${input2}`);
console.log(`Output: ${add(input1, input2)}`);
