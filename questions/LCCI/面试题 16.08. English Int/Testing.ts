// ------------------------------- solution begin -------------------------------
const ones = ['', 'One', 'Two', 'Three', 'Four', 'Five', 'Six', 'Seven', 'Eight', 'Nine', 'Ten', 'Eleven', 'Twelve', 'Thirteen', 'Fourteen', 'Fifteen', 'Sixteen', 'Seventeen', 'Eighteen', 'Nineteen'];
const tens = ['', '', 'Twenty', 'Thirty', 'Forty', 'Fifty', 'Sixty', 'Seventy', 'Eighty', 'Ninety'];
const thousands = ['', 'Thousand', 'Million', 'Billion'];

const numberToWords = (num: number): string => {
  if (num === 0) return 'Zero';
  const out: string[] = [];
  if (num < 0) {
    out.push('Negative');
    num = -num;
  }
  const below1000 = (n: number) => {
    if (n >= 100) {
      out.push(ones[Math.floor(n / 100)]);
      out.push('Hundred');
      n %= 100;
    }
    if (n >= 20) {
      out.push(tens[Math.floor(n / 10)]);
      n %= 10;
    }
    if (n > 0) out.push(ones[n]);
  };
  const chunks: number[] = [];
  for (let tmp = num; tmp > 0; tmp = Math.floor(tmp / 1000)) chunks.push(tmp % 1000);
  for (let i = chunks.length - 1; i >= 0; i--) {
    if (chunks[i] === 0) continue;
    below1000(chunks[i]);
    if (thousands[i]) out.push(thousands[i]);
  }
  return out.join(' ');
};
// ------------------------------- solution end ---------------------------------

const input = 12345;
console.log(`Input:  ${input}`);
console.log(`Output: "${numberToWords(input)}"`);
