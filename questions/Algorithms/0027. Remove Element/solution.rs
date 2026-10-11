pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn remove_element(nums: &mut Vec<i32>, val: i32) -> i32 {
    let mut i = 0;
    for j in 0..nums.len() {
      if nums[j] != val {
        nums[i] = nums[j];
        i += 1;
      }
    }
    i as i32
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let mut input1 = vec![3, 2, 2, 3];
  let input2 = 3;
  println!("Input:  {:?} {}", input1, input2);
  let k = Solution::remove_element(&mut input1, input2) as usize;
  println!("Output: {}, {:?}", k, &input1[..k]);
}
