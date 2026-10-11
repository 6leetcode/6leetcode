pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn three_sum_closest(mut nums: Vec<i32>, target: i32) -> i32 {
    nums.sort();
    let n = nums.len();
    let mut ans = nums[0] + nums[1] + nums[n - 1];
    for i in 0..n - 2 {
      let (mut left, mut right) = (i + 1, n - 1);
      while left < right {
        let sum = nums[i] + nums[left] + nums[right];
        if (target - ans).abs() > (target - sum).abs() {
          ans = sum;
        }
        if sum < target {
          left += 1;
        } else {
          right -= 1;
        }
      }
    }
    ans
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input1 = vec![-1, 2, 1, -4];
  let input2 = 2;
  println!("Input:  {:?} {}", input1, input2);
  println!("Output: {}", Solution::three_sum_closest(input1, input2));
}
