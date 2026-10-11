// ------------------------------- solution begin -------------------------------
const patternMatching = (pattern: string, value: string): boolean => {
  const n = value.length;
  if (pattern.length === 0) return n === 0;
  const na = pattern.split('').filter((c) => c === 'a').length;
  const nb = pattern.length - na;

  const check = (la: number, lb: number): boolean => {
    let a: string | null = null;
    let b: string | null = null;
    let pos = 0;
    for (const c of pattern) {
      if (c === 'a') {
        if (pos + la > n) return false;
        const sub = value.slice(pos, pos + la);
        if (a === null) a = sub;
        else if (a !== sub) return false;
        pos += la;
      } else {
        if (pos + lb > n) return false;
        const sub = value.slice(pos, pos + lb);
        if (b === null) b = sub;
        else if (b !== sub) return false;
        pos += lb;
      }
    }
    if (pos !== n) return false;
    if (a !== null && b !== null && a === b) return false;
    return true;
  };

  for (let la = 0; la <= n; la++) {
    if (na * la > n) break;
    const rem = n - na * la;
    if (nb === 0) {
      if (rem === 0 && check(la, 0)) return true;
    } else {
      if (rem % nb !== 0) continue;
      if (check(la, rem / nb)) return true;
    }
  }
  return false;
};
// ------------------------------- solution end ---------------------------------

const pattern = 'abba';
const value = 'dogcatcatdog';
console.log(`Input:  pattern = ${pattern}, value = ${value}`);
console.log(`Output: ${patternMatching(pattern, value)}`);
