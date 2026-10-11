pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn merge(a: &mut Vec<i32>, m: i32, b: &mut Vec<i32>, n: i32) {
    let (mut i, mut j, mut k) = (m - 1, n - 1, m + n - 1);
    while j >= 0 {
      if i >= 0 && a[i as usize] > b[j as usize] {
        a[k as usize] = a[i as usize];
        i -= 1;
      } else {
        a[k as usize] = b[j as usize];
        j -= 1;
      }
      k -= 1;
    }
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let mut a = vec![1, 2, 3, 0, 0, 0];
  let mut b = vec![2, 5, 6];
  let (m, n) = (3, 3);
  println!("Input:  A = {:?}, m = {}; B = {:?}, n = {}", a, m, b, n);
  Solution::merge(&mut a, m, &mut b, n);
  println!("Output: {:?}", a);
}
