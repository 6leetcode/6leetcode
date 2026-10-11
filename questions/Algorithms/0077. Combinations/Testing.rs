pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn combine(n: i32, k: i32) -> Vec<Vec<i32>> {
    fn dfs(n: i32, k: i32, start: i32, cur: &mut Vec<i32>, res: &mut Vec<Vec<i32>>) {
      if cur.len() as i32 == k {
        res.push(cur.clone());
        return;
      }
      for i in start..=n {
        cur.push(i);
        dfs(n, k, i + 1, cur, res);
        cur.pop();
      }
    }
    let mut res = vec![];
    let mut cur = vec![];
    dfs(n, k, 1, &mut cur, &mut res);
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let (n, k) = (4, 2);
  println!("Input:  {} {}", n, k);
  println!("Output: {:?}", Solution::combine(n, k));
}
