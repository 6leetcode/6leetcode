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
  pub fn is_valid_bst(root: Option<Box<TreeNode>>) -> bool {
    fn validate(node: &Option<Box<TreeNode>>, min: i64, max: i64) -> bool {
      match node {
        None => true,
        Some(n) => {
          let v = n.val as i64;
          v > min && v < max && validate(&n.left, min, v) && validate(&n.right, v, max)
        }
      }
    }
    validate(&root, i64::MIN, i64::MAX)
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let root = Some(Box::new(TreeNode {
    val: 2,
    left: Some(Box::new(TreeNode::new(1))),
    right: Some(Box::new(TreeNode::new(3))),
  }));
  println!("Input:  [2, 1, 3]");
  println!("Output: {}", Solution::is_valid_bst(root));
}
