pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn four_sum(mut nums: Vec<i32>, target: i32) -> Vec<Vec<i32>> {
    nums.sort();
    let n = nums.len();
    let mut res = vec![];
    if n < 4 {
      return res;
    }
    for i in 0..n - 3 {
      if i > 0 && nums[i] == nums[i - 1] {
        continue;
      }
      for j in i + 1..n - 2 {
        if j > i + 1 && nums[j] == nums[j - 1] {
          continue;
        }
        let (mut left, mut right) = (j + 1, n - 1);
        while left < right {
          let sum = nums[i] as i64 + nums[j] as i64 + nums[left] as i64 + nums[right] as i64;
          if sum < target as i64 {
            left += 1;
          } else if sum > target as i64 {
            right -= 1;
          } else {
            res.push(vec![nums[i], nums[j], nums[left], nums[right]]);
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
    }
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input1 = vec![1, 0, -1, 0, -2, 2];
  let input2 = 0;
  println!("Input:  {:?} {}", input1, input2);
  println!("Output: {:?}", Solution::four_sum(input1, input2));
}
