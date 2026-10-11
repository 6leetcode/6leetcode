pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn candy(ratings: Vec<i32>) -> i32 {
    let n = ratings.len();
    let mut c = vec![1i32; n];

    for i in 1..n {
      if ratings[i] > ratings[i - 1] {
        c[i] = c[i - 1] + 1;
      }
    }
    for i in (0..n - 1).rev() {
      if ratings[i] > ratings[i + 1] && c[i] <= c[i + 1] {
        c[i] = c[i + 1] + 1;
      }
    }

    c.iter().sum()
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let t1 = vec![1, 0, 2];
  println!("Input:  {:?}", t1);
  println!("Output: {}", Solution::candy(t1));

  let t2 = vec![1, 2, 2];
  println!("Input:  {:?}", t2);
  println!("Output: {}", Solution::candy(t2));
}
