// ------------------------------- solution begin -------------------------------
const exchangeBits = (num: number): number => ((num & 0xaaaaaaaa) >>> 1) | ((num & 0x55555555) << 1);
// ------------------------------- solution end ---------------------------------

const input = 2;
console.log(`Input:  ${input}`);
console.log(`Output: ${exchangeBits(input)}`);
