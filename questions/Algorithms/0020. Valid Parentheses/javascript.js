// ------------------------------- solution begin -------------------------------
var isValid = function (s) {
  const n = s.length;
  if (n % 2 === 1) {
    return false;
  }
  const pairs = new Map([
    [')', '('],
    [']', '['],
    ['}', '{']
  ]);
  const stk = [];
  s.split('').forEach(ch => {
    if (pairs.has(ch)) {
      if (!stk.length || stk[stk.length - 1] !== pairs.get(ch)) {
        return false;
      }
      stk.pop();
    }
    else {
      stk.push(ch);
    }
  });
  return !stk.length;
};
// ------------------------------- solution end ---------------------------------

let input = "()[]{}";
console.log("Input: ", input);
console.log("Output:", isValid(input));
