pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn is_interleave(s1: String, s2: String, s3: String) -> bool {
    let (a, b, c) = (s1.as_bytes(), s2.as_bytes(), s3.as_bytes());
    let (n, m) = (a.len(), b.len());
    if n + m != c.len() {
      return false;
    }
    let mut f = vec![vec![false; m + 1]; n + 1];
    f[0][0] = true;
    for i in 0..=n {
      for j in 0..=m {
        let p = i + j;
        if i > 0 {
          f[i][j] = f[i][j] || (f[i - 1][j] && a[i - 1] == c[p - 1]);
        }
        if j > 0 {
          f[i][j] = f[i][j] || (f[i][j - 1] && b[j - 1] == c[p - 1]);
        }
      }
    }
    f[n][m]
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let (s1, s2, s3) = (
    String::from("aabcc"),
    String::from("dbbca"),
    String::from("aadbbbaccc"),
  );
  println!("Input:  {}, {}, {}", s1, s2, s3);
  println!("Output: {}", Solution::is_interleave(s1, s2, s3));
}
