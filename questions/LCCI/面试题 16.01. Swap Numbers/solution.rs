pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn swap_numbers(numbers: &mut Vec<i32>) {
    numbers[0] ^= numbers[1];
    numbers[1] ^= numbers[0];
    numbers[0] ^= numbers[1];
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let mut input = vec![1, 2];
  println!("Input:  {:?}", input);
  Solution::swap_numbers(&mut input);
  println!("Output: {:?}", input);
}
