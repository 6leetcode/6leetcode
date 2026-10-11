// ------------------------------- solution begin -------------------------------
const replaceSpaces = (S: string, length: number): string => S.slice(0, length).split(' ').join('%20');
// ------------------------------- solution end ---------------------------------

const input = 'Mr John Smith ';
const length = 13;
console.log(`Input:  "${input}", ${length}`);
console.log(`Output: "${replaceSpaces(input, length)}"`);
