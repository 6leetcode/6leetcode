// ------------------------------- solution begin -------------------------------
const minWindow = (s: string, t: string): string => {
  const need: number[] = new Array(128).fill(0);
  const have: number[] = new Array(128).fill(0);
  let required = 0;
  for (const ch of t) {
    const c = ch.charCodeAt(0);
    if (need[c] === 0) required++;
    need[c]++;
  }
  let matched = 0;
  let left = 0;
  let start = 0;
  let minLen = Infinity;
  for (let right = 0; right < s.length; right++) {
    const c = s.charCodeAt(right);
    have[c]++;
    if (need[c] > 0 && have[c] === need[c]) matched++;
    while (matched === required) {
      if (right - left + 1 < minLen) {
        minLen = right - left + 1;
        start = left;
      }
      const lc = s.charCodeAt(left);
      if (need[lc] > 0 && have[lc] === need[lc]) matched--;
      have[lc]--;
      left++;
    }
  }
  return minLen === Infinity ? '' : s.slice(start, start + minLen);
};
// ------------------------------- solution end ---------------------------------

const s = 'ADOBECODEBANC';
const t = 'ABC';
console.log(`Input:  ${s} ${t}`);
console.log(`Output: ${minWindow(s, t)}`);
