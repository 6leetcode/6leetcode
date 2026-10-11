// ------------------------------- solution begin -------------------------------
const longestCommonPrefix = (strs: string[]): string => {
  if (strs.length === 0) return '';
  let prefix = strs[0];

  for (let i = 1; i < strs.length; i++) {
    while (!strs[i].startsWith(prefix)) {
      prefix = prefix.slice(0, -1);
      if (prefix === '') return '';
    }
  }

  return prefix;
};
// ------------------------------- solution end ---------------------------------

const input = ['flower', 'flow', 'flight'];
console.log(`Input:  [${input.join(' ')}]`);
console.log(`Output: ${longestCommonPrefix(input)}`);
