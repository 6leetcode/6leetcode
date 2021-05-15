// ------------------------------- solution begin -------------------------------
function addDigits(num: number): number {
  return (num - 1) % 9 + 1;
};
// ------------------------------- solution end ---------------------------------

let input = 28;
console.log(`Input:  ${input}`);
console.log(`Output: ${addDigits(input)}`);

export { }
