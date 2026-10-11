pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn search(nums: Vec<i32>, target: i32) -> i32 {
    let (mut lo, mut hi) = (0i32, nums.len() as i32 - 1);
    while lo <= hi {
      let mid = lo + (hi - lo) / 2;
      let (l, m, h) = (nums[lo as usize], nums[mid as usize], nums[hi as usize]);
      if m == target {
        return mid;
      }
      if l <= m {
        if target >= l && target < m {
          hi = mid - 1;
        } else {
          lo = mid + 1;
        }
      } else if target > m && target <= h {
        lo = mid + 1;
      } else {
        hi = mid - 1;
      }
    }
    -1
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input1 = vec![4, 5, 6, 7, 0, 1, 2];
  let input2 = 0;
  println!("Input:  {:?} {}", input1, input2);
  println!("Output: {}", Solution::search(input1, input2));
}
