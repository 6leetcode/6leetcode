pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn hamming_distance(x: i32, y: i32) -> i32 {
    (x ^ y).count_ones() as i32
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let (input1, input2) = (1, 4);
  println!("Input:  {}, {}", input1, input2);
  println!("Output: {}", Solution::hamming_distance(input1, input2));
}
