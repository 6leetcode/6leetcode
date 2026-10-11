import array from '../../library/typescript/array';

// ------------------------------- solution begin -------------------------------
const maxProfit = (prices: number[]): number => {
  if (prices.length === 0) return 0;
  let minPrice = prices[0];
  let best = 0;
  for (let i = 1; i < prices.length; i++) {
    if (prices[i] < minPrice) {
      minPrice = prices[i];
    } else if (prices[i] - minPrice > best) {
      best = prices[i] - minPrice;
    }
  }
  return best;
};
// ------------------------------- solution end ---------------------------------

const input = [7, 1, 5, 3, 6, 4];
console.log(`Input:  ${array(input)}`);
console.log(`Output: ${maxProfit(input)}`);
