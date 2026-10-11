// ------------------------------- solution begin -------------------------------
const freqAlphabets = (s: string): string => {
  let res = '';
  const n = s.length;
  for (let i = 0; i < n; i++) {
    if (i + 2 < n && s[i + 2] === '#') {
      const num = (s.charCodeAt(i) - 48) * 10 + (s.charCodeAt(i + 1) - 48);
      res += String.fromCharCode(97 + num - 1);
      i += 2;
    } else {
      res += String.fromCharCode(97 + (s.charCodeAt(i) - 48) - 1);
    }
  }
  return res;
};
// ------------------------------- solution end ---------------------------------

const input = '12345678910#11#12#13#14#15#16#17#18#19#20#21#22#23#24#25#26#';
console.log(`Input:  ${input}`);
console.log(`Output: ${freqAlphabets(input)}`);
