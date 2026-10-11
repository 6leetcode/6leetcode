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
  pub fn min_depth(root: Option<Box<TreeNode>>) -> i32 {
    match root {
      None => 0,
      Some(node) => {
        match (node.left.as_ref(), node.right.as_ref()) {
          (None, None) => 1,
          (Some(_), None) => 1 + Solution::min_depth(node.left),
          (None, Some(_)) => 1 + Solution::min_depth(node.right),
          (Some(_), Some(_)) => {
            1 + std::cmp::min(Solution::min_depth(node.left), Solution::min_depth(node.right))
          }
        }
      }
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
  println!("Output: {}", Solution::min_depth(t1));

  let t2 = Some(Box::new(TreeNode {
    val: 2,
    left: None,
    right: Some(Box::new(TreeNode {
      val: 3,
      left: None,
      right: Some(Box::new(TreeNode {
        val: 4,
        left: None,
        right: Some(Box::new(TreeNode {
          val: 5,
          left: None,
          right: Some(Box::new(TreeNode::new(6))),
        })),
      })),
    })),
  }));
  println!("Input:  [2, null, 3, null, 4, null, 5, null, 6]");
  println!("Output: {}", Solution::min_depth(t2));
}
