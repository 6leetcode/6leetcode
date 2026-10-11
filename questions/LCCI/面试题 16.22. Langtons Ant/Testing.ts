// ------------------------------- solution begin -------------------------------
const printKMoves = (K: number): string[] => {
  const dr = [0, 1, 0, -1];
  const dc = [1, 0, -1, 0];
  let dir = 0;
  let r = 0;
  let c = 0;
  const black = new Set<string>();
  const visited = new Set<string>(['0,0']);
  for (let k = 0; k < K; k++) {
    const p = `${r},${c}`;
    if (!black.has(p)) {
      black.add(p);
      dir = (dir + 1) % 4;
    } else {
      black.delete(p);
      dir = (dir + 3) % 4;
    }
    r += dr[dir];
    c += dc[dir];
    visited.add(`${r},${c}`);
  }
  let minR = 0;
  let maxR = 0;
  let minC = 0;
  let maxC = 0;
  for (const p of visited) {
    const [pr, pc] = p.split(',').map(Number);
    minR = Math.min(minR, pr);
    maxR = Math.max(maxR, pr);
    minC = Math.min(minC, pc);
    maxC = Math.max(maxC, pc);
  }
  const letters = 'RDLU';
  const res: string[] = [];
  for (let i = minR; i <= maxR; i++) {
    let row = '';
    for (let j = minC; j <= maxC; j++) {
      if (i === r && j === c) row += letters[dir];
      else if (black.has(`${i},${j}`)) row += 'X';
      else row += '_';
    }
    res.push(row);
  }
  return res;
};
// ------------------------------- solution end ---------------------------------

const K = 0;
console.log(`Input:  ${K}`);
console.log(`Output: ${JSON.stringify(printKMoves(K))}`);
