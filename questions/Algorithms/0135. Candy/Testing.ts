import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const candy = (ratings: number[]): number => {
  const n = ratings.length;
  const c: number[] = new Array(n).fill(1);

  for (let i = 1; i < n; i++) {
    if (ratings[i] > ratings[i - 1]) {
      c[i] = c[i - 1] + 1;
    }
  }
  for (let i = n - 2; i >= 0; i--) {
    if (ratings[i] > ratings[i + 1] && c[i] <= c[i + 1]) {
      c[i] = c[i + 1] + 1;
    }
  }

  return c.reduce((acc, v) => acc + v, 0);
};
// ------------------------------- solution end ---------------------------------

for (const ratings of [[1, 0, 2], [1, 2, 2]]) {
  console.log(`Input:  ${array(ratings)}`);
  console.log(`Output: ${candy(ratings)}`);
}
