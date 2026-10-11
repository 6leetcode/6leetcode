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
use std::collections::VecDeque;

impl Solution {
  pub fn zigzag_level_order(root: Option<Box<TreeNode>>) -> Vec<Vec<i32>> {
    let mut res: Vec<Vec<i32>> = vec![];
    let root_ref = match root.as_ref() {
      Some(node) => node.as_ref(),
      None => return res,
    };
    let mut queue: VecDeque<&TreeNode> = VecDeque::new();
    queue.push_back(root_ref);
    while !queue.is_empty() {
      let size = queue.len();
      let mut level = vec![];
      for _ in 0..size {
        let node = queue.pop_front().unwrap();
        level.push(node.val);
        if let Some(left) = node.left.as_ref() {
          queue.push_back(left.as_ref());
        }
        if let Some(right) = node.right.as_ref() {
          queue.push_back(right.as_ref());
        }
      }
      if res.len() % 2 == 1 {
        level.reverse();
      }
      res.push(level);
    }
    res
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
  println!("Output: {:?}", Solution::zigzag_level_order(t1));

  let t2 = Some(Box::new(TreeNode::new(1)));
  println!("Input:  [1]");
  println!("Output: {:?}", Solution::zigzag_level_order(t2));

  println!("Input:  []");
  println!("Output: {:?}", Solution::zigzag_level_order(None));
}
