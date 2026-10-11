pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn search_insert(nums: Vec<i32>, target: i32) -> i32 {
    let (mut lo, mut hi) = (0usize, nums.len());
    while lo < hi {
      let mid = lo + (hi - lo) / 2;
      if nums[mid] < target {
        lo = mid + 1;
      } else {
        hi = mid;
      }
    }
    lo as i32
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input1 = vec![1, 3, 5, 6];
  let input2 = 5;
  println!("Input:  {:?} {}", input1, input2);
  println!("Output: {}", Solution::search_insert(input1, input2));
}
