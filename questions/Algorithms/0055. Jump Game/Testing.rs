pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn can_jump(nums: Vec<i32>) -> bool {
    let mut rightmost = 0usize;
    for i in 0..nums.len() {
      if i <= rightmost {
        rightmost = rightmost.max(i + nums[i] as usize);
        if rightmost >= nums.len() - 1 {
          return true;
        }
      }
    }
    false
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = vec![3, 2, 1, 0, 4];
  println!("Input:  {:?}", input);
  println!("Output: {}", Solution::can_jump(input));
}
