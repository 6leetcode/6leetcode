pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn massage(nums: Vec<i32>) -> i32 {
    let (mut prev, mut cur) = (0, 0);
    for x in nums {
      let tmp = cur;
      cur = cur.max(prev + x);
      prev = tmp;
    }
    cur
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let nums = vec![1, 2, 3, 1];
  println!("Input:  {:?}", nums);
  println!("Output: {}", Solution::massage(nums));
}
