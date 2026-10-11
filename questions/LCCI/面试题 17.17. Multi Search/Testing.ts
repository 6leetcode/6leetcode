// ------------------------------- solution begin -------------------------------
const multiSearch = (big: string, smalls: string[]): number[][] => {
  const res: number[][] = [];
  for (const s of smalls) {
    const pos: number[] = [];
    if (s.length > 0) {
      let start = 0;
      while (true) {
        const idx = big.indexOf(s, start);
        if (idx === -1) break;
        pos.push(idx);
        start = idx + 1;
      }
    }
    res.push(pos);
  }
  return res;
};
// ------------------------------- solution end ---------------------------------

const big = 'mississippi';
const smalls = ['is', 'ppi', 'hi', 'sis', 'i', 'ssippi'];
console.log(`Input:  big = "mississippi", smalls = ["is","ppi","hi","sis","i","ssippi"]`);
console.log(`Output: ${JSON.stringify(multiSearch(big, smalls))}`);
