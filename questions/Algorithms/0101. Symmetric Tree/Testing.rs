pub struct Solution {}

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
  fn is_mirror(a: &Option<Box<TreeNode>>, b: &Option<Box<TreeNode>>) -> bool {
    match (a, b) {
      (None, None) => true,
      (Some(x), Some(y)) => {
        x.val == y.val
          && Solution::is_mirror(&x.left, &y.right)
          && Solution::is_mirror(&x.right, &y.left)
      }
      _ => false,
    }
  }

  pub fn is_symmetric(root: Option<Box<TreeNode>>) -> bool {
    Solution::is_mirror(&root, &root)
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let root = Some(Box::new(TreeNode {
    val: 1,
    left: Some(Box::new(TreeNode::new(2))),
    right: Some(Box::new(TreeNode::new(2))),
  }));
  println!("Input:  [1, 2, 2]");
  println!("Output: {}", Solution::is_symmetric(root));
}
