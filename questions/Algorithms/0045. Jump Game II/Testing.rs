pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn jump(nums: Vec<i32>) -> i32 {
    let (mut jumps, mut cur_end, mut farthest) = (0, 0usize, 0usize);
    for i in 0..nums.len().saturating_sub(1) {
      farthest = farthest.max(i + nums[i] as usize);
      if i == cur_end {
        jumps += 1;
        cur_end = farthest;
      }
    }
    jumps
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = vec![2, 3, 1, 1, 4];
  println!("Input:  {:?}", input);
  println!("Output: {}", Solution::jump(input));
}
