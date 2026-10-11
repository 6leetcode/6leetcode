pub struct Solution {}

#[derive(Clone)]
pub struct TreeNode {
  pub val: i32,
  pub left: Option<Box<TreeNode>>,
  pub right: Option<Box<TreeNode>>,
}

impl TreeNode {
  #[inline]
  fn new(val: i32) -> Self {
    TreeNode {
      val,
      left: None,
      right: None,
    }
  }
}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn path_sum(root: Option<Box<TreeNode>>, sum: i32) -> i32 {
    fn count(node: &Option<Box<TreeNode>>, target: i64) -> i32 {
      match node {
        None => 0,
        Some(n) => {
          let mut res = if n.val as i64 == target { 1 } else { 0 };
          res += count(&n.left, target - n.val as i64);
          res += count(&n.right, target - n.val as i64);
          res
        }
      }
    }
    match root {
      None => 0,
      Some(n) => {
        count(&Some(n.clone()), sum as i64)
          + Solution::path_sum(n.left, sum)
          + Solution::path_sum(n.right, sum)
      }
    }
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let root = Some(Box::new(TreeNode {
    val: 1,
    left: Some(Box::new(TreeNode::new(2))),
    right: Some(Box::new(TreeNode::new(3))),
  }));
  println!("Input:  [1, 2, 3], sum = 3");
  println!("Output: {}", Solution::path_sum(root, 3));
}
