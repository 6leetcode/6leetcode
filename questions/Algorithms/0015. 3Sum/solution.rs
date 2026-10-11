pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn three_sum(mut nums: Vec<i32>) -> Vec<Vec<i32>> {
    nums.sort();
    let mut res = vec![];
    let n = nums.len();
    if n < 3 {
      return res;
    }
    for i in 0..n - 2 {
      if nums[i] > 0 {
        break;
      }
      if i > 0 && nums[i] == nums[i - 1] {
        continue;
      }
      let (mut left, mut right) = (i + 1, n - 1);
      while left < right {
        let sum = nums[i] + nums[left] + nums[right];
        if sum < 0 {
          left += 1;
        } else if sum > 0 {
          right -= 1;
        } else {
          res.push(vec![nums[i], nums[left], nums[right]]);
          while left < right && nums[left] == nums[left + 1] {
            left += 1;
          }
          while left < right && nums[right] == nums[right - 1] {
            right -= 1;
          }
          left += 1;
          right -= 1;
        }
      }
    }
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = vec![-1, 0, 1, 2, -1, -4];
  println!("Input:  {:?}", input);
  println!("Output: {:?}", Solution::three_sum(input));
}
