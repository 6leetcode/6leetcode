pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn get_kth_magic_number(k: i32) -> i32 {
    let k = k as usize;
    let mut dp = vec![1i64; k];
    let (mut i3, mut i5, mut i7) = (0usize, 0usize, 0usize);
    for i in 1..k {
      let n3 = dp[i3] * 3;
      let n5 = dp[i5] * 5;
      let n7 = dp[i7] * 7;
      let m = n3.min(n5).min(n7);
      dp[i] = m;
      if m == n3 {
        i3 += 1;
      }
      if m == n5 {
        i5 += 1;
      }
      if m == n7 {
        i7 += 1;
      }
    }
    dp[k - 1] as i32
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = 5;
  println!("Input:  {}", input);
  println!("Output: {}", Solution::get_kth_magic_number(input));
}
