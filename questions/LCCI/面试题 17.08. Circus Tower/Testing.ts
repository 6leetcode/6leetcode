// ------------------------------- solution begin -------------------------------
const bestSeqAtIndex = (height: number[], weight: number[]): number => {
  const people: number[][] = height.map((h, i) => [h, weight[i]]);
  people.sort((a, b) => (a[0] !== b[0] ? a[0] - b[0] : b[1] - a[1]));
  const dp: number[] = [];
  for (const [, w] of people) {
    let lo = 0;
    let hi = dp.length;
    while (lo < hi) {
      const mid = lo + Math.floor((hi - lo) / 2);
      if (dp[mid] < w) lo = mid + 1;
      else hi = mid;
    }
    if (lo === dp.length) dp.push(w);
    else dp[lo] = w;
  }
  return dp.length;
};
// ------------------------------- solution end ---------------------------------

const height = [65, 70, 56, 75, 60, 68];
const weight = [100, 150, 90, 190, 95, 110];
console.log(`Input:  height = [65,70,56,75,60,68], weight = [100,150,90,190,95,110]`);
console.log(`Output: ${bestSeqAtIndex(height, weight)}`);
