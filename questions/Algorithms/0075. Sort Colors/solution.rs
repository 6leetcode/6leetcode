pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn sort_colors(nums: &mut Vec<i32>) {
    let n = nums.len();
    let mut ptr = 0;
    for i in 0..n {
      if nums[i] == 0 {
        nums.swap(i, ptr);
        ptr += 1;
      }
    }
    for i in ptr..n {
      if nums[i] == 1 {
        nums.swap(i, ptr);
        ptr += 1;
      }
    }
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let mut input = vec![2, 0, 2, 1, 1, 0];
  println!("Input:  {:?}", input);
  Solution::sort_colors(&mut input);
  println!("Output: {:?}", input);
}
