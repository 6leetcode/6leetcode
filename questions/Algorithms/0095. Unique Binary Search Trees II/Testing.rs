pub struct Solution {}

#[derive(Clone)]
pub struct TreeNode {
  pub val: i32,
  pub left: Option<Box<TreeNode>>,
  pub right: Option<Box<TreeNode>>,
}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn generate_trees(n: i32) -> Vec<Option<Box<TreeNode>>> {
    if n == 0 {
      return vec![];
    }
    fn gen(start: i32, end: i32) -> Vec<Option<Box<TreeNode>>> {
      if start > end {
        return vec![None];
      }
      let mut res = vec![];
      for i in start..=end {
        let lefts = gen(start, i - 1);
        let rights = gen(i + 1, end);
        for l in &lefts {
          for r in &rights {
            res.push(Some(Box::new(TreeNode {
              val: i,
              left: l.clone(),
              right: r.clone(),
            })));
          }
        }
      }
      res
    }
    gen(1, n)
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = 3;
  println!("Input:  {}", input);
  println!("Output: {}", Solution::generate_trees(input).len());
}
