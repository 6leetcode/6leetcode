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
  pub fn is_same_tree(p: Option<Box<TreeNode>>, q: Option<Box<TreeNode>>) -> bool {
    match (p, q) {
      (None, None) => true,
      (Some(a), Some(b)) => {
        a.val == b.val
          && Solution::is_same_tree(a.left, b.left)
          && Solution::is_same_tree(a.right, b.right)
      }
      _ => false,
    }
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let node1 = Some(Box::new(TreeNode {
    val: 1,
    left: Some(Box::new(TreeNode::new(2))),
    right: Some(Box::new(TreeNode::new(3))),
  }));
  println!("Input:  [1, 2, 3]");
  println!("Output: {}", Solution::is_same_tree(node1.clone(), node1));
}
