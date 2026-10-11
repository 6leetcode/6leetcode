// ------------------------------- solution begin -------------------------------
const countAndSay = (n: number): string => {
  let cur = '1';
  for (let k = 1; k < n; k++) {
    let next = '';
    let i = 0;
    while (i < cur.length) {
      let j = i;
      while (j < cur.length && cur[j] === cur[i]) j++;
      next += `${j - i}${cur[i]}`;
      i = j;
    }
    cur = next;
  }
  return cur;
};
// ------------------------------- solution end ---------------------------------

const input = 4;
console.log(`Input:  ${input}`);
console.log(`Output: ${countAndSay(input)}`);
