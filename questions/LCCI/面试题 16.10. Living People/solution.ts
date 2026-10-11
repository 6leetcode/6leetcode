// ------------------------------- solution begin -------------------------------
const maxAliveYear = (birth: number[], death: number[]): number => {
  const delta: number[] = new Array(102).fill(0);
  for (let i = 0; i < birth.length; i++) {
    delta[birth[i] - 1900]++;
    delta[death[i] - 1900 + 1]--;
  }
  let best = 0;
  let cur = 0;
  let bestYear = 1900;
  for (let i = 0; i <= 100; i++) {
    cur += delta[i];
    if (cur > best) {
      best = cur;
      bestYear = 1900 + i;
    }
  }
  return bestYear;
};
// ------------------------------- solution end ---------------------------------

const birth = [1900, 1901, 1950];
const death = [1948, 1951, 2000];
console.log(`Input:  birth = [${birth.join(', ')}], death = [${death.join(', ')}]`);
console.log(`Output: ${maxAliveYear(birth, death)}`);
