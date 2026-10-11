pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn remove_duplicates(nums: &mut Vec<i32>) -> i32 {
    if nums.is_empty() {
      return 0;
    }
    let mut i = 0;
    for j in 1..nums.len() {
      if nums[j] != nums[i] {
        i += 1;
        nums[i] = nums[j];
      }
    }
    (i + 1) as i32
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let mut input = vec![0, 0, 1, 1, 1, 2, 2, 3, 3, 4];
  println!("Input:  {:?}", input);
  let k = Solution::remove_duplicates(&mut input) as usize;
  println!("Output: {}, {:?}", k, &input[..k]);
}
