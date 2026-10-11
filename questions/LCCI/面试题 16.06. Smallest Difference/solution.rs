pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn smallest_difference(mut a: Vec<i32>, mut b: Vec<i32>) -> i32 {
    a.sort();
    b.sort();
    let (mut i, mut j) = (0usize, 0usize);
    let mut best = i64::MAX;
    while i < a.len() && j < b.len() {
      best = best.min((a[i] as i64 - b[j] as i64).abs());
      if a[i] < b[j] {
        i += 1;
      } else {
        j += 1;
      }
    }
    best as i32
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let a = vec![1, 3, 15, 11, 2];
  let b = vec![23, 127, 235, 19, 8];
  println!("Input:  {:?}, {:?}", a, b);
  println!("Output: {}", Solution::smallest_difference(a, b));
}
