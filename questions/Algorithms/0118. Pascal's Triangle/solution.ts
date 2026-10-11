import matrix from '../../library/typescript/matrix';

// ------------------------------- solution begin -------------------------------
const generate = (numRows: number): number[][] => {
  const ans: number[][] = [];
  for (let i = 0; i < numRows; i++) {
    const row: number[] = new Array(i + 1).fill(1);
    for (let j = 1; j < i; j++) {
      row[j] = ans[i - 1][j - 1] + ans[i - 1][j];
    }
    ans.push(row);
  }
  return ans;
};
// ------------------------------- solution end ---------------------------------

const input = 5;
console.log(`Input:  ${input}`);
console.log(`Output: ${matrix(generate(input))}`);
