pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn can_permute_palindrome(s: String) -> bool {
    let mut count = [0i32; 128];
    for c in s.bytes() {
      count[c as usize] ^= 1;
    }
    count.iter().sum::<i32>() <= 1
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = String::from("tactcoa");
  println!("Input:  {}", input);
  println!("Output: {}", Solution::can_permute_palindrome(input));
}
