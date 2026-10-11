pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn largest_number(nums: Vec<i32>) -> String {
    let mut nums = nums;
    nums.sort_by(|&a, &b| {
      let ab = format!("{}{}", a, b);
      let ba = format!("{}{}", b, a);
      ba.cmp(&ab)
    });
    if nums[0] == 0 {
      return "0".to_string();
    }
    nums.iter().map(|x| x.to_string()).collect()
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = vec![3, 30, 34, 5, 9];
  println!("Input:  {:?}", input);
  println!("Output: {}", Solution::largest_number(input));
}
