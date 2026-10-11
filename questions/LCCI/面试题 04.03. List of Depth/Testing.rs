use std::collections::VecDeque;

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

pub struct ListNode {
  pub val: i32,
  pub next: Option<Box<ListNode>>,
}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn list_of_depth(tree: Option<Box<TreeNode>>) -> Vec<Vec<i32>> {
    let mut res = vec![];
    if tree.is_none() {
      return res;
    }
    let mut q: VecDeque<Box<TreeNode>> = VecDeque::new();
    q.push_back(tree.unwrap());
    while !q.is_empty() {
      let level_size = q.len();
      let mut level = vec![];
      for _ in 0..level_size {
        let node = q.pop_front().unwrap();
        level.push(node.val);
        if let Some(l) = node.left {
          q.push_back(l);
        }
        if let Some(r) = node.right {
          q.push_back(r);
        }
      }
      res.push(level);
    }
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let root = Some(Box::new(TreeNode {
    val: 1,
    left: Some(Box::new(TreeNode {
      val: 2,
      left: Some(Box::new(TreeNode {
        val: 4,
        left: Some(Box::new(TreeNode::new(8))),
        right: None,
      })),
      right: Some(Box::new(TreeNode::new(5))),
    })),
    right: Some(Box::new(TreeNode {
      val: 3,
      left: None,
      right: Some(Box::new(TreeNode::new(7))),
    })),
  }));
  println!("Input:  [1, 2, 3, 4, 5, null, 7, 8]");
  println!("Output: {:?}", Solution::list_of_depth(root));
}
