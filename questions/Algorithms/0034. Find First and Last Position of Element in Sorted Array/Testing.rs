pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  fn lower_bound(nums: &[i32], target: i32) -> usize {
    let (mut lo, mut hi) = (0usize, nums.len());
    while lo < hi {
      let mid = lo + (hi - lo) / 2;
      if nums[mid] < target {
        lo = mid + 1;
      } else {
        hi = mid;
      }
    }
    lo
  }

  pub fn search_range(nums: Vec<i32>, target: i32) -> Vec<i32> {
    let lo = Solution::lower_bound(&nums, target);
    if lo < nums.len() && nums[lo] == target {
      let hi = Solution::lower_bound(&nums, target + 1) as i32 - 1;
      return vec![lo as i32, hi];
    }
    vec![-1, -1]
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input1 = vec![5, 7, 7, 8, 8, 10];
  let input2 = 8;
  println!("Input:  {:?} {}", input1, input2);
  println!("Output: {:?}", Solution::search_range(input1, input2));
}
