pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn generate(num_rows: i32) -> Vec<Vec<i32>> {
    let n = num_rows as usize;
    let mut ans: Vec<Vec<i32>> = vec![];
    for i in 0..n {
      let mut row = vec![1i32; i + 1];
      for j in 1..i {
        row[j] = ans[i - 1][j - 1] + ans[i - 1][j];
      }
      ans.push(row);
    }
    ans
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = 5;
  println!("Input:  {}", input);
  println!("Output: {:?}", Solution::generate(input));
}
