pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn combination_sum(candidates: Vec<i32>, target: i32) -> Vec<Vec<i32>> {
    fn dfs(
      candidates: &[i32],
      remain: i32,
      start: usize,
      cur: &mut Vec<i32>,
      res: &mut Vec<Vec<i32>>,
    ) {
      if remain == 0 {
        res.push(cur.clone());
        return;
      }
      for i in start..candidates.len() {
        if candidates[i] > remain {
          continue;
        }
        cur.push(candidates[i]);
        dfs(candidates, remain - candidates[i], i, cur, res);
        cur.pop();
      }
    }
    let mut res = vec![];
    let mut cur = vec![];
    dfs(&candidates, target, 0, &mut cur, &mut res);
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input1 = vec![2, 3, 6, 7];
  let input2 = 7;
  println!("Input:  {:?} {}", input1, input2);
  println!("Output: {:?}", Solution::combination_sum(input1, input2));
}
