// ------------------------------- solution begin -------------------------------
const isValid = (s: string): boolean => {
  const pairs: Record<string, string> = { ')': '(', ']': '[', '}': '{' };
  const stack: string[] = [];

  for (const c of s) {
    if (pairs[c]) {
      if (stack.length === 0 || stack.pop() !== pairs[c]) return false;
    } else {
      stack.push(c);
    }
  }

  return stack.length === 0;
};
// ------------------------------- solution end ---------------------------------

const input = '()[]{}';
console.log(`Input:  ${input}`);
console.log(`Output: ${isValid(input)}`);
