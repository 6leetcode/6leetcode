pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn missing_two(nums: Vec<i32>) -> Vec<i32> {
    let n = nums.len() as i64 + 2;
    let sum_all = n * (n + 1) / 2;
    let sq_all = n * (n + 1) * (2 * n + 1) / 6;
    let sum: i64 = nums.iter().map(|&x| x as i64).sum();
    let sq: i64 = nums.iter().map(|&x| x as i64 * x as i64).sum();
    let ds = sum_all - sum;
    let dq = sq_all - sq;
    let diff = ((2 * dq - ds * ds) as f64).sqrt() as i64;
    let a = ((ds + diff) / 2) as i32;
    let b = (ds - a as i64) as i32;
    vec![a, b]
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let nums = vec![2, 3];
  println!("Input:  {:?}", nums);
  println!("Output: {:?}", Solution::missing_two(nums));
}
