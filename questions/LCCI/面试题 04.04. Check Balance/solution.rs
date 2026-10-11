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
  pub fn is_balanced(root: Option<Box<TreeNode>>) -> bool {
    fn height(node: &Option<Box<TreeNode>>) -> i32 {
      if let Some(n) = node {
        let l = height(&n.left);
        if l == -1 {
          return -1;
        }
        let r = height(&n.right);
        if r == -1 {
          return -1;
        }
        if (l - r).abs() > 1 {
          return -1;
        }
        1 + l.max(r)
      } else {
        0
      }
    }
    height(&root) != -1
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let root = Some(Box::new(TreeNode {
    val: 3,
    left: Some(Box::new(TreeNode::new(9))),
    right: Some(Box::new(TreeNode {
      val: 20,
      left: Some(Box::new(TreeNode::new(15))),
      right: Some(Box::new(TreeNode::new(7))),
    })),
  }));
  println!("Input:  [3, 9, 20, null, null, 15, 7]");
  println!("Output: {}", Solution::is_balanced(root));
}
