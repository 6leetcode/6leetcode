pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn generate_parenthesis(n: i32) -> Vec<String> {
    fn backtrack(res: &mut Vec<String>, cur: &mut String, open: i32, close: i32, n: i32) {
      if cur.len() == (n * 2) as usize {
        res.push(cur.clone());
        return;
      }
      if open < n {
        cur.push('(');
        backtrack(res, cur, open + 1, close, n);
        cur.pop();
      }
      if close < open {
        cur.push(')');
        backtrack(res, cur, open, close + 1, n);
        cur.pop();
      }
    }
    let mut res = vec![];
    let mut cur = String::new();
    backtrack(&mut res, &mut cur, 0, 0, n);
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = 3;
  println!("Input:  {}", input);
  println!("Output: {:?}", Solution::generate_parenthesis(input));
}
