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
  pub fn max_depth(root: Option<Box<TreeNode>>) -> i32 {
    match root {
      None => 0,
      Some(node) => 1 + std::cmp::max(
        Solution::max_depth(node.left),
        Solution::max_depth(node.right),
      ),
    }
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let t1 = Some(Box::new(TreeNode {
    val: 3,
    left: Some(Box::new(TreeNode::new(9))),
    right: Some(Box::new(TreeNode {
      val: 20,
      left: Some(Box::new(TreeNode::new(15))),
      right: Some(Box::new(TreeNode::new(7))),
    })),
  }));
  println!("Input:  [3, 9, 20, null, null, 15, 7]");
  println!("Output: {}", Solution::max_depth(t1));

  let t2 = Some(Box::new(TreeNode {
    val: 1,
    left: None,
    right: Some(Box::new(TreeNode::new(2))),
  }));
  println!("Input:  [1, null, 2]");
  println!("Output: {}", Solution::max_depth(t2));
}
