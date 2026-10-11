// ------------------------------- solution begin -------------------------------
const masterMind = (solution: string, guess: string): number[] => {
  let hits = 0;
  const sCount: Record<string, number> = {};
  const gCount: Record<string, number> = {};
  for (let i = 0; i < solution.length; i++) {
    if (solution[i] === guess[i]) {
      hits++;
    } else {
      sCount[solution[i]] = (sCount[solution[i]] ?? 0) + 1;
      gCount[guess[i]] = (gCount[guess[i]] ?? 0) + 1;
    }
  }
  let pseudo = 0;
  for (const c of Object.keys(sCount)) {
    pseudo += Math.min(sCount[c], gCount[c] ?? 0);
  }
  return [hits, pseudo];
};
// ------------------------------- solution end ---------------------------------

console.log(`Input:  solution = RGBY, guess = GGRR`);
console.log(`Output: [${masterMind('RGBY', 'GGRR').join(', ')}]`);
