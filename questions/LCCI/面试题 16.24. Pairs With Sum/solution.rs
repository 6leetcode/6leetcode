pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn pair_sums(mut nums: Vec<i32>, target: i32) -> Vec<Vec<i32>> {
    nums.sort();
    let mut res = vec![];
    let mut i = 0i32;
    let mut j = nums.len() as i32 - 1;
    while i < j {
      let sum = nums[i as usize] + nums[j as usize];
      if sum < target {
        i += 1;
      } else if sum > target {
        j -= 1;
      } else {
        res.push(vec![nums[i as usize], nums[j as usize]]);
        i += 1;
        j -= 1;
      }
    }
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let nums = vec![5, 6, 5, 6];
  println!("Input:  nums = [5,6,5,6], target = 11");
  println!("Output: {:?}", Solution::pair_sums(nums, 11));
}
