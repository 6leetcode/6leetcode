pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn max_profit(prices: Vec<i32>) -> i32 {
    let (mut buy1, mut sell1) = (-prices[0], 0);
    let (mut buy2, mut sell2) = (-prices[0], 0);

    for &price in &prices {
      buy1 = buy1.max(-price);
      sell1 = sell1.max(buy1 + price);
      buy2 = buy2.max(sell1 - price);
      sell2 = sell2.max(buy2 + price);
    }

    sell2
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let prices1 = vec![3, 3, 5, 0, 0, 3, 1, 4];
  let prices2 = vec![1, 2, 3, 4, 5];
  let prices3 = vec![7, 6, 4, 3, 1];
  let prices4 = vec![1];

  println!("Input:  {:?}", prices1);
  println!("Output: {}", Solution::max_profit(prices1));

  println!("Input:  {:?}", prices2);
  println!("Output: {}", Solution::max_profit(prices2));

  println!("Input:  {:?}", prices3);
  println!("Output: {}", Solution::max_profit(prices3));

  println!("Input:  {:?}", prices4);
  println!("Output: {}", Solution::max_profit(prices4));
}
