pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn permutation(s: String) -> Vec<String> {
    let chars: Vec<char> = s.chars().collect();
    let n = chars.len();
    let mut used = vec![false; n];
    let mut cur = String::new();
    let mut res = vec![];
    fn dfs(
      chars: &[char],
      used: &mut Vec<bool>,
      cur: &mut String,
      res: &mut Vec<String>,
    ) {
      if cur.len() == chars.len() {
        res.push(cur.clone());
        return;
      }
      for i in 0..chars.len() {
        if used[i] {
          continue;
        }
        used[i] = true;
        cur.push(chars[i]);
        dfs(chars, used, cur, res);
        cur.pop();
        used[i] = false;
      }
    }
    dfs(&chars, &mut used, &mut cur, &mut res);
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = String::from("qwe");
  println!("Input:  {}", input);
  println!("Output: {:?}", Solution::permutation(input));
}
