import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const canCompleteCircuit = (gas: number[], cost: number[]): number => {
  let total = 0;
  let tank = 0;
  let start = 0;

  for (let i = 0; i < gas.length; i++) {
    const diff = gas[i] - cost[i];
    total += diff;
    tank += diff;
    if (tank < 0) {
      start = i + 1;
      tank = 0;
    }
  }

  return total >= 0 ? start : -1;
};
// ------------------------------- solution end ---------------------------------

const tests: [number[], number[]][] = [
  [[1, 2, 3, 4, 5], [3, 4, 5, 1, 2]],
  [[2, 3, 4], [3, 4, 3]],
];

for (const [gas, cost] of tests) {
  console.log(`Input:  ${array(gas)} ${array(cost)}`);
  console.log(`Output: ${canCompleteCircuit(gas, cost)}`);
}
