// ------------------------------- solution begin -------------------------------
const canWinNim = (n: number): boolean => n % 4 !== 0;
// ------------------------------- solution end ---------------------------------

const input = 4;
console.log(`Input:  ${input}`);
console.log(`Output: ${canWinNim(input)}`);
