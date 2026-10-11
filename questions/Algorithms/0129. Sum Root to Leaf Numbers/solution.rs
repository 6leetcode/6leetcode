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
  pub fn sum_numbers(root: Option<Box<TreeNode>>) -> i32 {
    fn dfs(node: &Option<Box<TreeNode>>, current: i32) -> i32 {
      match node {
        None => 0,
        Some(n) => {
          let value = current * 10 + n.val;
          if n.left.is_none() && n.right.is_none() {
            value
          } else {
            dfs(&n.left, value) + dfs(&n.right, value)
          }
        }
      }
    }
    dfs(&root, 0)
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
    val: 4,
    left: Some(Box::new(TreeNode {
      val: 9,
      left: Some(Box::new(TreeNode::new(5))),
      right: Some(Box::new(TreeNode::new(1))),
    })),
    right: Some(Box::new(TreeNode::new(0))),
  }));

  let root3 = Some(Box::new(TreeNode::new(0)));

  let root4 = Some(Box::new(TreeNode {
    val: 1,
    left: Some(Box::new(TreeNode::new(5))),
    right: None,
  }));

  println!("Input:  [1, 2, 3]");
  println!("Output: {}", Solution::sum_numbers(root1));

  println!("Input:  [4, 9, 0, 5, 1]");
  println!("Output: {}", Solution::sum_numbers(root2));

  println!("Input:  [0]");
  println!("Output: {}", Solution::sum_numbers(root3));

  println!("Input:  [1, 5]");
  println!("Output: {}", Solution::sum_numbers(root4));
}
