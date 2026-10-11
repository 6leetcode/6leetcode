// ------------------------------- solution begin -------------------------------
const calculateTime = (keyboard: string, word: string): number => {
  const pos: Record<string, number> = {};
  for (let i = 0; i < keyboard.length; i++) pos[keyboard[i]] = i;
  let ans = 0;
  let cur = 0;
  for (const c of word) {
    const next = pos[c];
    ans += Math.abs(cur - next);
    cur = next;
  }
  return ans;
};
// ------------------------------- solution end ---------------------------------

const input1 = 'abcdefghijklmnopqrstuvwxyz';
const input2 = 'cba';
console.log(`Input:  ${input1} ${input2}`);
console.log(`Output: ${calculateTime(input1, input2)}`);
