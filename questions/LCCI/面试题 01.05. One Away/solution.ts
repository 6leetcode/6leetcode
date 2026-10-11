// ------------------------------- solution begin -------------------------------
const oneEditAway = (first: string, second: string): boolean => {
  const m = first.length;
  const n = second.length;
  if (Math.abs(m - n) > 1) return false;
  if (m > n) return oneEditAway(second, first);
  for (let i = 0; i < m; i++) {
    if (first[i] !== second[i]) {
      if (m === n) return first.slice(i + 1) === second.slice(i + 1);
      return first.slice(i) === second.slice(i + 1);
    }
  }
  return true;
};
// ------------------------------- solution end ---------------------------------

const first = 'pale';
const second = 'ple';
console.log(`Input:  ${first} ${second}`);
console.log(`Output: ${oneEditAway(first, second)}`);
