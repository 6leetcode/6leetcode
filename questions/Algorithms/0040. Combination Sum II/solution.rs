pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn combination_sum2(mut candidates: Vec<i32>, target: i32) -> Vec<Vec<i32>> {
    candidates.sort();
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
          break;
        }
        if i > start && candidates[i] == candidates[i - 1] {
          continue;
        }
        cur.push(candidates[i]);
        dfs(candidates, remain - candidates[i], i + 1, cur, res);
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
  let input1 = vec![10, 1, 2, 7, 6, 1, 5];
  let input2 = 8;
  println!("Input:  {:?} {}", input1, input2);
  println!("Output: {:?}", Solution::combination_sum2(input1, input2));
}
