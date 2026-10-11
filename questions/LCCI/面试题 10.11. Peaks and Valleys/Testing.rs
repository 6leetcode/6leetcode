pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn wiggle_sort(nums: &mut Vec<i32>) {
    nums.sort();
    let mut i = 0;
    while i + 1 < nums.len() {
      nums.swap(i, i + 1);
      i += 2;
    }
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let mut input = vec![5, 3, 1, 2, 3];
  println!("Input:  {:?}", input);
  Solution::wiggle_sort(&mut input);
  println!("Output: {:?}", input);
}
