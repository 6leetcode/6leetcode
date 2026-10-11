pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn remove_duplicates(nums: &mut Vec<i32>) -> i32 {
    if nums.len() <= 2 {
      return nums.len() as i32;
    }
    let mut i = 2;
    for j in 2..nums.len() {
      if nums[j] != nums[i - 2] {
        nums[i] = nums[j];
        i += 1;
      }
    }
    i as i32
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let mut input = vec![1, 1, 1, 2, 2, 3];
  println!("Input:  {:?}", input);
  let k = Solution::remove_duplicates(&mut input) as usize;
  println!("Output: {}, {:?}", k, &input[..k]);
}
