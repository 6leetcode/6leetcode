import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const maxProfit = (prices: number[]): number => {
  let profit = 0;
  for (let i = 1; i < prices.length; i++) {
    if (prices[i] > prices[i - 1]) {
      profit += prices[i] - prices[i - 1];
    }
  }
  return profit;
};
// ------------------------------- solution end ---------------------------------

const prices1 = [7, 1, 5, 3, 6, 4];
const prices2 = [1, 2, 3, 4, 5];
const prices3 = [7, 6, 4, 3, 1];

console.log(`Input:  ${array(prices1)}`);
console.log(`Output: ${maxProfit(prices1)}`);

console.log(`Input:  ${array(prices2)}`);
console.log(`Output: ${maxProfit(prices2)}`);

console.log(`Input:  ${array(prices3)}`);
console.log(`Output: ${maxProfit(prices3)}`);
