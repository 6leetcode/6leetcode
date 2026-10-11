// ------------------------------- solution begin -------------------------------
const findLongestSubarray = (array: string[]): string[] => {
  const first = new Map<number, number>();
  first.set(0, -1);
  let sum = 0;
  let bestLen = 0;
  let bestStart = 0;
  for (let i = 0; i < array.length; i++) {
    const c = array[i][0];
    sum += c >= '0' && c <= '9' ? -1 : 1;
    if (first.has(sum)) {
      const len = i - first.get(sum)!;
      if (len > bestLen) {
        bestLen = len;
        bestStart = first.get(sum)! + 1;
      }
    } else {
      first.set(sum, i);
    }
  }
  return array.slice(bestStart, bestStart + bestLen);
};
// ------------------------------- solution end ---------------------------------

const array = ['A', '1', 'B', 'C', 'D', '2', '3', '4', 'E', '5', 'F', 'G', '6', '7', 'H', 'I', 'J', 'K', 'L', 'M'];
console.log(`Input:  ${JSON.stringify(array)}`);
console.log(`Output: ${JSON.stringify(findLongestSubarray(array))}`);
