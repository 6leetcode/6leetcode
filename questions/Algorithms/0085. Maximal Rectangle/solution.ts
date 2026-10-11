// ------------------------------- solution begin -------------------------------
const maximalRectangle = (matrix: string[][]): number => {
  if (matrix.length === 0) return 0;
  const n = matrix[0].length;
  const heights: number[] = new Array(n).fill(0);
  let maxArea = 0;

  const largest = (hs: number[]): number => {
    const st: number[] = [];
    let best = 0;
    for (let i = 0; i <= hs.length; i++) {
      const h = i < hs.length ? hs[i] : 0;
      while (st.length && hs[st[st.length - 1]] > h) {
        const height = hs[st.pop()!];
        const width = st.length === 0 ? i : i - st[st.length - 1] - 1;
        best = Math.max(best, height * width);
      }
      st.push(i);
    }
    return best;
  };

  for (const row of matrix) {
    for (let j = 0; j < n; j++) {
      heights[j] = row[j] === '1' ? heights[j] + 1 : 0;
    }
    maxArea = Math.max(maxArea, largest(heights));
  }
  return maxArea;
};
// ------------------------------- solution end ---------------------------------

const input = [
  ['1', '0', '1', '0', '0'],
  ['1', '0', '1', '1', '1'],
  ['1', '1', '1', '1', '1'],
  ['1', '0', '0', '1', '0'],
];
console.log(`Input:  ${JSON.stringify(input)}`);
console.log(`Output: ${maximalRectangle(input)}`);
