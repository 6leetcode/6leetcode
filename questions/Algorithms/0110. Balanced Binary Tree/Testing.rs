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
  fn height(node: &Option<Box<TreeNode>>) -> i32 {
    match node {
      None => 0,
      Some(n) => {
        let left = Solution::height(&n.left);
        if left == -1 {
          return -1;
        }
        let right = Solution::height(&n.right);
        if right == -1 {
          return -1;
        }
        if (left - right).abs() > 1 {
          return -1;
        }
        std::cmp::max(left, right) + 1
      }
    }
  }

  pub fn is_balanced(root: Option<Box<TreeNode>>) -> bool {
    Solution::height(&root) != -1
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
  println!("Output: {}", Solution::is_balanced(t1));

  let left = TreeNode {
    val: 2,
    left: Some(Box::new(TreeNode {
      val: 3,
      left: Some(Box::new(TreeNode::new(4))),
      right: Some(Box::new(TreeNode::new(4))),
    })),
    right: Some(Box::new(TreeNode::new(3))),
  };
  let t2 = Some(Box::new(TreeNode {
    val: 1,
    left: Some(Box::new(left)),
    right: Some(Box::new(TreeNode::new(2))),
  }));
  println!("Input:  [1, 2, 2, 3, 3, null, null, 4, 4]");
  println!("Output: {}", Solution::is_balanced(t2));

  println!("Input:  []");
  println!("Output: {}", Solution::is_balanced(None));
}
