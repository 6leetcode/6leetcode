pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn get_permutation(n: i32, k: i32) -> String {
    let n = n as usize;
    let mut fact = vec![1i32; n + 1];
    for i in 1..=n {
      fact[i] = fact[i - 1] * i as i32;
    }
    let mut nums: Vec<u8> = (1..=n as u8).map(|x| b'0' + x).collect();
    let mut k = k - 1;
    let mut res = String::new();
    for i in (1..=n).rev() {
      let idx = (k / fact[i - 1]) as usize;
      res.push(nums.remove(idx) as char);
      k %= fact[i - 1];
    }
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let (n, k) = (3, 3);
  println!("Input:  {} {}", n, k);
  println!("Output: {}", Solution::get_permutation(n, k));
}
