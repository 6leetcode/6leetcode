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
  pub fn has_path_sum(root: Option<Box<TreeNode>>, target_sum: i32) -> bool {
    fn check(node: &Option<Box<TreeNode>>, current: i32, target: i32) -> bool {
      match node {
        None => false,
        Some(n) => {
          let sum = current + n.val;
          if n.left.is_none() && n.right.is_none() {
            sum == target
          } else {
            check(&n.left, sum, target) || check(&n.right, sum, target)
          }
        }
      }
    }
    check(&root, 0, target_sum)
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let root1 = Some(Box::new(TreeNode {
    val: 5,
    left: Some(Box::new(TreeNode {
      val: 4,
      left: Some(Box::new(TreeNode {
        val: 11,
        left: Some(Box::new(TreeNode::new(7))),
        right: Some(Box::new(TreeNode::new(2))),
      })),
      right: None,
    })),
    right: Some(Box::new(TreeNode {
      val: 8,
      left: Some(Box::new(TreeNode::new(13))),
      right: Some(Box::new(TreeNode {
        val: 4,
        left: None,
        right: Some(Box::new(TreeNode::new(1))),
      })),
    })),
  }));

  let root2 = Some(Box::new(TreeNode {
    val: 1,
    left: Some(Box::new(TreeNode::new(2))),
    right: Some(Box::new(TreeNode::new(3))),
  }));

  let root3 = Some(Box::new(TreeNode {
    val: 1,
    left: Some(Box::new(TreeNode::new(2))),
    right: None,
  }));

  println!("Input:  [5, 4, 8, 11, null, 13, 4, 7, 2, null, null, null, 1], targetSum = 22");
  println!("Output: {}", Solution::has_path_sum(root1, 22));

  println!("Input:  [1, 2, 3], targetSum = 5");
  println!("Output: {}", Solution::has_path_sum(root2, 5));

  println!("Input:  [], targetSum = 0");
  println!("Output: {}", Solution::has_path_sum(None, 0));

  println!("Input:  [1, 2], targetSum = 3");
  println!("Output: {}", Solution::has_path_sum(root3, 3));
}
