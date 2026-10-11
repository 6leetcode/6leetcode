pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn search(nums: Vec<i32>, target: i32) -> bool {
    let (mut lo, mut hi) = (0i32, nums.len() as i32 - 1);
    while lo <= hi {
      let mid = lo + (hi - lo) / 2;
      let (l, m, h) = (nums[lo as usize], nums[mid as usize], nums[hi as usize]);
      if m == target {
        return true;
      }
      if l == m && m == h {
        lo += 1;
        hi -= 1;
      } else if l <= m {
        if l <= target && target < m {
          hi = mid - 1;
        } else {
          lo = mid + 1;
        }
      } else if m < target && target <= h {
        lo = mid + 1;
      } else {
        hi = mid - 1;
      }
    }
    false
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = vec![2, 5, 6, 0, 0, 1, 2];
  let target = 0;
  println!("Input:  {:?} {}", input, target);
  println!("Output: {}", Solution::search(input, target));
}
