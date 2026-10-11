// ------------------------------- solution begin -------------------------------
const divingBoard = (shorter: number, longer: number, k: number): number[] => {
  if (k === 0) return [];
  if (shorter === longer) return [shorter * k];
  const res: number[] = [];
  for (let i = 0; i <= k; i++) res.push(shorter * (k - i) + longer * i);
  return res;
};
// ------------------------------- solution end ---------------------------------

const shorter = 1;
const longer = 2;
const k = 3;
console.log(`Input:  shorter = ${shorter}, longer = ${longer}, k = ${k}`);
console.log(`Output: [${divingBoard(shorter, longer, k).join(', ')}]`);
