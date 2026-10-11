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
  pub fn max_path_sum(root: Option<Box<TreeNode>>) -> i32 {
    fn gain(node: &Option<Box<TreeNode>>, best: &mut i32) -> i32 {
      match node {
        None => 0,
        Some(n) => {
          let left = gain(&n.left, best).max(0);
          let right = gain(&n.right, best).max(0);
          *best = (*best).max(n.val + left + right);
          n.val + left.max(right)
        }
      }
    }

    let mut best = i32::MIN;
    gain(&root, &mut best);
    best
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let root1 = Some(Box::new(TreeNode {
    val: 1,
    left: Some(Box::new(TreeNode::new(2))),
    right: Some(Box::new(TreeNode::new(3))),
  }));

  let root2 = Some(Box::new(TreeNode {
    val: -10,
    left: Some(Box::new(TreeNode::new(9))),
    right: Some(Box::new(TreeNode {
      val: 20,
      left: Some(Box::new(TreeNode::new(15))),
      right: Some(Box::new(TreeNode::new(7))),
    })),
  }));

  let root3 = Some(Box::new(TreeNode::new(-3)));

  let root4 = Some(Box::new(TreeNode {
    val: 2,
    left: Some(Box::new(TreeNode::new(-1))),
    right: Some(Box::new(TreeNode::new(-2))),
  }));

  println!("Input:  [1, 2, 3]");
  println!("Output: {}", Solution::max_path_sum(root1));

  println!("Input:  [-10, 9, 20, null, null, 15, 7]");
  println!("Output: {}", Solution::max_path_sum(root2));

  println!("Input:  [-3]");
  println!("Output: {}", Solution::max_path_sum(root3));

  println!("Input:  [2, -1, -2]");
  println!("Output: {}", Solution::max_path_sum(root4));
}
