pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn count_smaller(nums: Vec<i32>) -> Vec<i32> {
    let n = nums.len();
    let mut res = vec![0; n];
    for i in 0..n {
      let mut count = 0;
      for j in i + 1..n {
        if nums[j] < nums[i] {
          count += 1;
        }
      }
      res[i] = count;
    }
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = vec![5, 2, 6, 1];
  println!("Input:  {:?}", input);
  println!("Output: {:?}", Solution::count_smaller(input));
}
