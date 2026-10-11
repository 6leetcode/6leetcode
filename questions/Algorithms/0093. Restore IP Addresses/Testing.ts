// ------------------------------- solution begin -------------------------------
const restoreIpAddresses = (s: string): string[] => {
  const res: string[] = [];
  const segments: number[] = new Array(4).fill(0);

  const dfs = (segId: number, segStart: number) => {
    if (segId === 4) {
      if (segStart === s.length) res.push(segments.join('.'));
      return;
    }
    if (segStart === s.length) return;
    if (s[segStart] === '0') {
      segments[segId] = 0;
      dfs(segId + 1, segStart + 1);
    }
    let addr = 0;
    for (let segEnd = segStart; segEnd < s.length; segEnd++) {
      addr = addr * 10 + (s.charCodeAt(segEnd) - 48);
      if (addr > 0 && addr <= 255) {
        segments[segId] = addr;
        dfs(segId + 1, segEnd + 1);
      } else {
        break;
      }
    }
  };

  dfs(0, 0);
  return res;
};
// ------------------------------- solution end ---------------------------------

const input = '25525511135';
console.log(`Input:  ${input}`);
console.log(`Output: [${restoreIpAddresses(input).join(', ')}]`);
