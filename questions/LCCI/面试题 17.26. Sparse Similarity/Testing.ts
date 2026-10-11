// ------------------------------- solution begin -------------------------------
const computeSimilarities = (docs: number[][]): string[] => {
  const wordDocs = new Map<number, number[]>();
  for (let i = 0; i < docs.length; i++) {
    for (const w of docs[i]) {
      if (!wordDocs.has(w)) wordDocs.set(w, []);
      wordDocs.get(w)!.push(i);
    }
  }
  const inter = new Map<string, number>();
  for (const ids of wordDocs.values()) {
    for (let a = 0; a < ids.length; a++) {
      for (let b = a + 1; b < ids.length; b++) {
        const key = `${ids[a]},${ids[b]}`;
        inter.set(key, (inter.get(key) ?? 0) + 1);
      }
    }
  }
  const keys = [...inter.keys()].sort((x, y) => {
    const [a1, b1] = x.split(',').map(Number);
    const [a2, b2] = y.split(',').map(Number);
    return a1 - a2 || b1 - b2;
  });
  return keys.map((key) => {
    const [i, j] = key.split(',').map(Number);
    const c = inter.get(key)!;
    const uni = docs[i].length + docs[j].length - c;
    return `${i},${j}: ${(c / uni).toFixed(4)}`;
  });
};
// ------------------------------- solution end ---------------------------------

const docs = [
  [14, 15, 100, 9, 3],
  [32, 1, 9, 3, 5],
  [15, 29, 2, 6, 8, 7],
  [7, 10],
];
console.log(`Input:  [[14,15,100,9,3],[32,1,9,3,5],[15,29,2,6,8,7],[7,10]]`);
console.log(`Output: ${JSON.stringify(computeSimilarities(docs))}`);
