// ------------------------------- solution begin -------------------------------
const maxRectangle = (words: string[]): string[] => {
  const byLen = new Map<number, string[]>();
  for (const w of words) {
    if (!byLen.has(w.length)) byLen.set(w.length, []);
    byLen.get(w.length)!.push(w);
  }
  let bestArea = 0;
  let best: string[] = [];
  for (const w of byLen.keys()) {
    for (const h of byLen.keys()) {
      if (w * h <= bestArea) continue;
      const rows: string[] = [];
      const colWords = byLen.get(h)!;
      const colSet = new Set(colWords);

      const backtrack = () => {
        if (rows.length === h) {
          for (let c = 0; c < w; c++) {
            const col = rows.map((r) => r[c]).join('');
            if (!colSet.has(col)) return;
          }
          bestArea = w * h;
          best = [...rows];
          return;
        }
        for (const word of byLen.get(w)!) {
          rows.push(word);
          let ok = true;
          for (let c = 0; c < w; c++) {
            const prefix = rows.map((r) => r[c]).join('');
            if (!colWords.some((cw) => cw.startsWith(prefix))) {
              ok = false;
              break;
            }
          }
          if (ok) backtrack();
          rows.pop();
        }
      };

      backtrack();
    }
  }
  return best;
};
// ------------------------------- solution end ---------------------------------

const words = ['this', 'real', 'hard', 'trh', 'hea', 'iar', 'sld'];
console.log(`Input:  ["this", "real", "hard", "trh", "hea", "iar", "sld"]`);
console.log(`Output: ${JSON.stringify(maxRectangle(words))}`);
