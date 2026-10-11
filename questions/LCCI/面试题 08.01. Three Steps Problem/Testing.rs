pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn ways_to_step(n: i32) -> i32 {
    const MOD: i64 = 1000000007;
    if n == 1 {
      return 1;
    }
    if n == 2 {
      return 2;
    }
    if n == 3 {
      return 4;
    }
    let (mut a, mut b, mut c) = (1i64, 2i64, 4i64);
    for _ in 4..=n {
      let d = (a + b + c) % MOD;
      a = b;
      b = c;
      c = d;
    }
    c as i32
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = 5;
  println!("Input:  {}", input);
  println!("Output: {}", Solution::ways_to_step(input));
}
