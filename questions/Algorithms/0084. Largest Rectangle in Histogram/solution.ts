import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const largestRectangleArea = (heights: number[]): number => {
  const n = heights.length;
  const st: number[] = [];
  let maxArea = 0;
  for (let i = 0; i <= n; i++) {
    const h = i < n ? heights[i] : 0;
    while (st.length && heights[st[st.length - 1]] > h) {
      const height = heights[st.pop()!];
      const width = st.length === 0 ? i : i - st[st.length - 1] - 1;
      maxArea = Math.max(maxArea, height * width);
    }
    st.push(i);
  }
  return maxArea;
};
// ------------------------------- solution end ---------------------------------

const input = [2, 1, 5, 6, 2, 3];
console.log(`Input:  ${array(input)}`);
console.log(`Output: ${largestRectangleArea(input)}`);
