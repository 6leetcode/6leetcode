// ------------------------------- solution begin -------------------------------
const isUnique = (astr: string): boolean => {
  const seen = new Set<string>();
  for (const c of astr) {
    if (seen.has(c)) return false;
    seen.add(c);
  }
  return true;
};
// ------------------------------- solution end ---------------------------------

const input = 'leetcode';
console.log(`Input:  ${input}`);
console.log(`Output: ${isUnique(input)}`);
