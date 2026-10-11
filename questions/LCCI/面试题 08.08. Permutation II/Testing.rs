pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn permutation(s: String) -> Vec<String> {
    let mut chars: Vec<char> = s.chars().collect();
    chars.sort();
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
        if i > 0 && chars[i] == chars[i - 1] && !used[i - 1] {
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
  let input = String::from("qqe");
  println!("Input:  {}", input);
  println!("Output: {:?}", Solution::permutation(input));
}
