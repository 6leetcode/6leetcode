pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn max_profit(prices: Vec<i32>) -> i32 {
    if prices.is_empty() {
      return 0;
    }
    let mut min_price = prices[0];
    let mut best = 0;
    for &p in &prices[1..] {
      if p < min_price {
        min_price = p;
      } else if p - min_price > best {
        best = p - min_price;
      }
    }
    best
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = vec![7, 1, 5, 3, 6, 4];
  println!("Input:  {:?}", input);
  println!("Output: {}", Solution::max_profit(input));
}
