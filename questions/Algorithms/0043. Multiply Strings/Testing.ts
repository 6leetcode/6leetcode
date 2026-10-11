// ------------------------------- solution begin -------------------------------
const multiply = (num1: string, num2: string): string => {
  if (num1 === '0' || num2 === '0') return '0';
  const m = num1.length;
  const n = num2.length;
  const res: number[] = new Array(m + n).fill(0);
  for (let i = m - 1; i >= 0; i--) {
    for (let j = n - 1; j >= 0; j--) {
      const mul = (num1.charCodeAt(i) - 48) * (num2.charCodeAt(j) - 48);
      const p2 = i + j + 1;
      const total = mul + res[p2];
      res[p2] = total % 10;
      res[i + j] += Math.floor(total / 10);
    }
  }
  const out = res.join('').replace(/^0+/, '');
  return out === '' ? '0' : out;
};
// ------------------------------- solution end ---------------------------------

const input1 = '123';
const input2 = '456';
console.log(`Input:  ${input1} ${input2}`);
console.log(`Output: ${multiply(input1, input2)}`);
