pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn max_sub_array(nums: Vec<i32>) -> i32 {
    let mut pre = 0;
    let mut max_ans = nums[0];
    for &x in &nums {
      pre = pre.max(pre + x).max(x);
      max_ans = max_ans.max(pre);
    }
    max_ans
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = vec![-2, 1, -3, 4, -1, 2, 1, -5, 4];
  println!("Input:  {:?}", input);
  println!("Output: {}", Solution::max_sub_array(input));
}
