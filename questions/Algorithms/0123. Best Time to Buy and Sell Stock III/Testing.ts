import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const maxProfit = (prices: number[]): number => {
  let buy1 = -prices[0];
  let sell1 = 0;
  let buy2 = -prices[0];
  let sell2 = 0;

  for (const price of prices) {
    buy1 = Math.max(buy1, -price);
    sell1 = Math.max(sell1, buy1 + price);
    buy2 = Math.max(buy2, sell1 - price);
    sell2 = Math.max(sell2, buy2 + price);
  }

  return sell2;
};
// ------------------------------- solution end ---------------------------------

const prices1 = [3, 3, 5, 0, 0, 3, 1, 4];
const prices2 = [1, 2, 3, 4, 5];
const prices3 = [7, 6, 4, 3, 1];
const prices4 = [1];

console.log(`Input:  ${array(prices1)}`);
console.log(`Output: ${maxProfit(prices1)}`);

console.log(`Input:  ${array(prices2)}`);
console.log(`Output: ${maxProfit(prices2)}`);

console.log(`Input:  ${array(prices3)}`);
console.log(`Output: ${maxProfit(prices3)}`);

console.log(`Input:  ${array(prices4)}`);
console.log(`Output: ${maxProfit(prices4)}`);
