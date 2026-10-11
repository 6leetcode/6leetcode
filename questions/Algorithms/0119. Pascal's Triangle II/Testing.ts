import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const getRow = (rowIndex: number): number[] => {
  const row: number[] = new Array(rowIndex + 1).fill(1);
  for (let i = 1; i <= rowIndex; i++) {
    for (let j = i - 1; j >= 1; j--) {
      row[j] += row[j - 1];
    }
  }
  return row;
};
// ------------------------------- solution end ---------------------------------

const cases = [3, 0, 1, 4];
for (const input of cases) {
  console.log(`Input:  ${input}`);
  console.log(`Output: ${array(getRow(input))}`);
}
