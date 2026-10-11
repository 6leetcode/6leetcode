pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn find_magic_index(nums: Vec<i32>) -> i32 {
    fn search(nums: &[i32], lo: i32, hi: i32) -> i32 {
      if lo > hi {
        return -1;
      }
      let mid = lo + (hi - lo) / 2;
      if nums[mid as usize] == mid {
        return mid;
      }
      let left_hi = (mid - 1).min(nums[mid as usize]);
      let res = search(nums, lo, left_hi);
      if res != -1 {
        return res;
      }
      search(nums, (mid + 1).max(nums[mid as usize]), hi)
    }
    search(&nums, 0, nums.len() as i32 - 1)
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let nums = vec![1, 1, 1];
  println!("Input:  [1, 1, 1]");
  println!("Output: {}", Solution::find_magic_index(nums));
}
