pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn sort_array_by_parity_ii(a: Vec<i32>) -> Vec<i32> {
    let n = a.len();
    let mut ans = vec![0; n];
    let mut i = 0;
    for &x in &a {
      if x % 2 == 0 {
        ans[i] = x;
        i += 2;
      }
    }
    let mut i = 1;
    for &x in &a {
      if x % 2 == 1 {
        ans[i] = x;
        i += 2;
      }
    }
    ans
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = vec![4, 2, 5, 7];
  println!("Input:  {:?}", input);
  println!("Output: {:?}", Solution::sort_array_by_parity_ii(input));
}
