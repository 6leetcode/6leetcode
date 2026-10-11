pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn single_number(nums: Vec<i32>) -> i32 {
    let (mut ones, mut twos) = (0, 0);
    for num in nums {
      ones = ones ^ (num & !twos);
      twos = twos ^ (num & !ones);
    }
    ones
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = vec![0, 1, 0, 1, 0, 1, 99];
  println!("Input:  {:?}", input);
  println!("Output: {}", Solution::single_number(input));
}
