// ------------------------------- solution begin -------------------------------
const strStr = (haystack: string, needle: string): number => {
  const n = haystack.length;
  const m = needle.length;
  if (m === 0) return 0;
  for (let i = 0; i + m <= n; i++) {
    if (haystack.slice(i, i + m) === needle) return i;
  }
  return -1;
};
// ------------------------------- solution end ---------------------------------

const haystack = 'sadbutsad';
const needle = 'sad';
console.log(`Input:  ${haystack} ${needle}`);
console.log(`Output: ${strStr(haystack, needle)}`);
