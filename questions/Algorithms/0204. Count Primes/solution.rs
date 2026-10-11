pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn count_primes(n: i32) -> i32 {
    if n < 2 {
      return 0;
    }
    let n = n as usize;
    let mut is_prim = vec![true; n];
    let mut i = 2;
    while i * i < n {
      if is_prim[i] {
        let mut j = i * i;
        while j < n {
          is_prim[j] = false;
          j += i;
        }
      }
      i += 1;
    }
    (2..n).filter(|&i| is_prim[i]).count() as i32
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = 10;
  println!("Input:  {}", input);
  println!("Output: {}", Solution::count_primes(input));
}
