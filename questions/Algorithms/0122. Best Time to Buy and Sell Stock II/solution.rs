pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn max_profit(prices: Vec<i32>) -> i32 {
    let mut profit = 0;
    for i in 1..prices.len() {
      if prices[i] > prices[i - 1] {
        profit += prices[i] - prices[i - 1];
      }
    }
    profit
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let prices1 = vec![7, 1, 5, 3, 6, 4];
  let prices2 = vec![1, 2, 3, 4, 5];
  let prices3 = vec![7, 6, 4, 3, 1];

  println!("Input:  {:?}", prices1);
  println!("Output: {}", Solution::max_profit(prices1));

  println!("Input:  {:?}", prices2);
  println!("Output: {}", Solution::max_profit(prices2));

  println!("Input:  {:?}", prices3);
  println!("Output: {}", Solution::max_profit(prices3));
}
