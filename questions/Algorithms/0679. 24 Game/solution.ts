// ------------------------------- solution begin -------------------------------
const judgePoint24 = (nums: number[]): boolean => {
  const solve = (arr: number[]): boolean => {
    if (arr.length === 1) return Math.abs(arr[0] - 24) < 1e-6;
    for (let i = 0; i < arr.length; i++) {
      for (let j = 0; j < arr.length; j++) {
        if (i === j) continue;
        const rest: number[] = [];
        for (let k = 0; k < arr.length; k++) {
          if (k !== i && k !== j) rest.push(arr[k]);
        }
        const x = arr[i];
        const y = arr[j];
        const cands = [x + y, x - y, x * y];
        if (Math.abs(y) > 1e-6) cands.push(x / y);
        for (const v of cands) {
          if (solve([...rest, v])) return true;
        }
      }
    }
    return false;
  };
  return solve(nums.map((x) => x));
};
// ------------------------------- solution end ---------------------------------

const input = [3, 3, 8, 8];
console.log(`Input:  [${input.join(', ')}]`);
console.log(`Output: ${judgePoint24(input)}`);
