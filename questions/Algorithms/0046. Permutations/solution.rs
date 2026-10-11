pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn permute(nums: Vec<i32>) -> Vec<Vec<i32>> {
    fn backtrack(nums: &[i32], used: &mut Vec<bool>, cur: &mut Vec<i32>, res: &mut Vec<Vec<i32>>) {
      if cur.len() == nums.len() {
        res.push(cur.clone());
        return;
      }
      for i in 0..nums.len() {
        if used[i] {
          continue;
        }
        used[i] = true;
        cur.push(nums[i]);
        backtrack(nums, used, cur, res);
        cur.pop();
        used[i] = false;
      }
    }
    let mut res = vec![];
    let mut cur = vec![];
    let mut used = vec![false; nums.len()];
    backtrack(&nums, &mut used, &mut cur, &mut res);
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = vec![1, 2, 3];
  println!("Input:  {:?}", input);
  println!("Output: {:?}", Solution::permute(input));
}
