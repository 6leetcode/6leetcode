// ------------------------------- solution begin -------------------------------
const isFlipedString = (s1: string, s2: string): boolean =>
  s1.length === s2.length && (s2 + s2).includes(s1);
// ------------------------------- solution end ---------------------------------

const s1 = 'waterbottle';
const s2 = 'erbottlewat';
console.log(`Input:  ${s1} ${s2}`);
console.log(`Output: ${isFlipedString(s1, s2)}`);
