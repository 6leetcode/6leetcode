// ------------------------------- solution begin -------------------------------
const poorPigs = (buckets: number, minutesToDie: number, minutesToTest: number): number => {
  const base = Math.floor(minutesToTest / minutesToDie) + 1;
  let ans = 0;
  let capacity = 1;
  while (capacity < buckets) {
    capacity *= base;
    ans++;
  }
  return ans;
};
// ------------------------------- solution end ---------------------------------

const buckets = 1000;
const minutesToDie = 15;
const minutesToTest = 1000;
console.log(`Input:  ${buckets}, ${minutesToDie}, ${minutesToTest}`);
console.log(`Output: ${poorPigs(buckets, minutesToDie, minutesToTest)}`);
