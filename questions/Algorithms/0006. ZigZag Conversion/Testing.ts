// ------------------------------- solution begin -------------------------------
const convert = (s: string, numRows: number): string => {
  if (numRows === 1) return s;
  const n = s.length;
  const cycle = 2 * numRows - 2;
  let ret = '';

  for (let i = 0; i < numRows; i++) {
    for (let j = 0; i + j < n; j += cycle) {
      ret += s[i + j];
      if (i !== 0 && i !== numRows - 1 && j + cycle - i < n) {
        ret += s[j + cycle - i];
      }
    }
  }

  return ret;
};
// ------------------------------- solution end ---------------------------------

const input = 'PAYPALISHIRING';
const rows = 3;
console.log(`Input:  ${input} ${rows}`);
console.log(`Output: ${convert(input, rows)}`);
