pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn subsets_with_dup(mut nums: Vec<i32>) -> Vec<Vec<i32>> {
    nums.sort();
    fn dfs(nums: &[i32], start: usize, cur: &mut Vec<i32>, res: &mut Vec<Vec<i32>>) {
      res.push(cur.clone());
      for i in start..nums.len() {
        if i > start && nums[i] == nums[i - 1] {
          continue;
        }
        cur.push(nums[i]);
        dfs(nums, i + 1, cur, res);
        cur.pop();
      }
    }
    let mut res = vec![];
    let mut cur = vec![];
    dfs(&nums, 0, &mut cur, &mut res);
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = vec![1, 2, 2];
  println!("Input:  {:?}", input);
  println!("Output: {:?}", Solution::subsets_with_dup(input));
}
