pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn max_alive_year(birth: Vec<i32>, death: Vec<i32>) -> i32 {
    let mut delta = vec![0i32; 102];
    for i in 0..birth.len() {
      delta[(birth[i] - 1900) as usize] += 1;
      delta[(death[i] - 1900 + 1) as usize] -= 1;
    }
    let (mut best, mut cur, mut best_year) = (0, 0, 1900);
    for i in 0..=100 {
      cur += delta[i];
      if cur > best {
        best = cur;
        best_year = 1900 + i as i32;
      }
    }
    best_year
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let birth = vec![1900, 1901, 1950];
  let death = vec![1948, 1951, 2000];
  println!("Input:  birth = {:?}, death = {:?}", birth, death);
  println!("Output: {}", Solution::max_alive_year(birth, death));
}
