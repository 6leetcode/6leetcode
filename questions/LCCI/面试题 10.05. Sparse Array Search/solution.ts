// ------------------------------- solution begin -------------------------------
const findString = (words: string[], s: string): number => {
  let lo = 0;
  let hi = words.length - 1;
  while (lo <= hi) {
    const mid = lo + Math.floor((hi - lo) / 2);
    let m = mid;
    while (m < hi && words[m] === '') m++;
    if (words[m] === '') {
      hi = mid - 1;
      continue;
    }
    if (words[m] === s) return m;
    if (words[m] < s) {
      lo = m + 1;
    } else {
      hi = mid - 1;
    }
  }
  return -1;
};
// ------------------------------- solution end ---------------------------------

const words = ['at', '', '', '', 'ball', '', '', 'car', '', '', 'dad', '', ''];
console.log(`Input:  ["at", "", "", "", "ball", "", "", "car", "", "", "dad", "", ""], s = "ball"`);
console.log(`Output: ${findString(words, 'ball')}`);
