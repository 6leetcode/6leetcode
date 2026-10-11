// ------------------------------- solution begin -------------------------------
const fullJustify = (words: string[], maxWidth: number): string[] => {
  const res: string[] = [];
  const n = words.length;
  let i = 0;
  while (i < n) {
    let j = i;
    let length = 0;
    while (j < n && length + words[j].length + (j - i) <= maxWidth) {
      length += words[j].length;
      j++;
    }
    const count = j - i;
    let line: string;
    if (j === n || count === 1) {
      line = words.slice(i, j).join(' ');
      line += ' '.repeat(maxWidth - line.length);
    } else {
      let total = 0;
      for (let k = i; k < j; k++) total += words[k].length;
      const gaps = count - 1;
      const spaces = maxWidth - total;
      const base = Math.floor(spaces / gaps);
      const extra = spaces % gaps;
      let parts = '';
      for (let k = i; k < j; k++) {
        parts += words[k];
        if (k !== j - 1) {
          parts += ' '.repeat(base + (k - i < extra ? 1 : 0));
        }
      }
      line = parts;
    }
    res.push(line);
    i = j;
  }
  return res;
};
// ------------------------------- solution end ---------------------------------

const input = ['This', 'is', 'an', 'example', 'of', 'text', 'justification.'];
const maxWidth = 16;
console.log(`Input:  [${input.join(', ')}] ${maxWidth}`);
console.log(`Output: ${JSON.stringify(fullJustify(input, maxWidth))}`);
