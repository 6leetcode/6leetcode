// ------------------------------- solution begin -------------------------------
const parseBoolExpr = (expression: string): boolean => {
  const stack: string[] = [];
  for (const c of expression) {
    if ('tf(!&|'.includes(c)) {
      stack.push(c);
    } else if (c === ')') {
      let hasTrue = false;
      let hasFalse = false;
      while (stack[stack.length - 1] !== '(') {
        const x = stack.pop()!;
        if (x === 't') hasTrue = true;
        else hasFalse = true;
      }
      stack.pop();
      const op = stack.pop()!;
      let res: string;
      if (op === '!') res = hasFalse ? 't' : 'f';
      else if (op === '&') res = hasFalse ? 'f' : 't';
      else res = hasTrue ? 't' : 'f';
      stack.push(res);
    }
  }
  return stack[0] === 't';
};
// ------------------------------- solution end ---------------------------------

const input = '|(&(t,f,t),!(t))';
console.log(`Input:  ${input}`);
console.log(`Output: ${parseBoolExpr(input)}`);
