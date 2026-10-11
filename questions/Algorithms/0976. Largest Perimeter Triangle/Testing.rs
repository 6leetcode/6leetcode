pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn largest_perimeter(mut a: Vec<i32>) -> i32 {
    a.sort();
    for i in (2..a.len()).rev() {
      if a[i - 2] + a[i - 1] > a[i] {
        return a[i - 2] + a[i - 1] + a[i];
      }
    }
    0
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = vec![3, 6, 2, 3];
  println!("Input:  {:?}", input);
  println!("Output: {}", Solution::largest_perimeter(input));
}
