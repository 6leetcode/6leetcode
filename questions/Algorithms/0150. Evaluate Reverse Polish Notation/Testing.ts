// ------------------------------- solution begin -------------------------------
const evalRPN = (tokens: string[]): number => {
  const stack: number[] = [];
  const ops = new Set(["+", "-", "*", "/"]);
  for (const t of tokens) {
    if (ops.has(t)) {
      const b = stack.pop()!;
      const a = stack.pop()!;
      let r = 0;
      if (t === "+") r = a + b;
      else if (t === "-") r = a - b;
      else if (t === "*") r = a * b;
      else r = Math.trunc(a / b);
      stack.push(r);
    } else {
      stack.push(Number(t));
    }
  }
  return stack.pop()!;
};
// ------------------------------- solution end ---------------------------------

const run = (tokens: string[]): void => {
  console.log(`Input:  [${tokens.map((t) => `"${t}"`).join(", ")}]`);
  console.log(`Output: ${evalRPN([...tokens])}`);
};

run(["2", "1", "+", "3", "*"]);
run(["4", "13", "5", "/", "+"]);
run(["10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"]);
