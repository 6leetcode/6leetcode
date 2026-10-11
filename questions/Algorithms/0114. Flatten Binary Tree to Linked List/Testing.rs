use std::collections::VecDeque;

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
  pub fn flatten(root: &mut Option<Box<TreeNode>>) {
    if root.is_none() {
      return;
    }
    let mut node = root.take().unwrap();
    Self::flatten(&mut node.left);
    Self::flatten(&mut node.right);
    let left = node.left.take();
    let right = node.right.take();
    if left.is_some() {
      node.right = left;
      let mut tail = node.right.as_mut().unwrap();
      while tail.right.is_some() {
        tail = tail.right.as_mut().unwrap();
      }
      tail.right = right;
    } else {
      node.right = right;
    }
    node.left = None;
    *root = Some(node);
  }
}
// ------------------------------- solution end ---------------------------------

fn tree_show(root: &Option<Box<TreeNode>>) -> String {
  if root.is_none() {
    return "[]".to_string();
  }
  let mut parts: Vec<String> = Vec::new();
  let mut queue: VecDeque<Option<&TreeNode>> = VecDeque::new();
  queue.push_back(root.as_ref().map(|n| n.as_ref()));
  while let Some(cur) = queue.pop_front() {
    match cur {
      Some(node) => {
        parts.push(node.val.to_string());
        queue.push_back(node.left.as_ref().map(|n| n.as_ref()));
        queue.push_back(node.right.as_ref().map(|n| n.as_ref()));
      }
      None => parts.push("null".to_string()),
    }
  }
  while parts.last().map_or(false, |p| p == "null") {
    parts.pop();
  }
  format!("[{}]", parts.join(", "))
}

fn main() {
  let mut root1 = Some(Box::new(TreeNode {
    val: 1,
    left: Some(Box::new(TreeNode {
      val: 2,
      left: Some(Box::new(TreeNode::new(3))),
      right: Some(Box::new(TreeNode::new(4))),
    })),
    right: Some(Box::new(TreeNode {
      val: 5,
      left: None,
      right: Some(Box::new(TreeNode::new(6))),
    })),
  }));
  println!("Input:  root = {}", tree_show(&root1));
  Solution::flatten(&mut root1);
  println!("Output: {}", tree_show(&root1));

  let mut root2 = Some(Box::new(TreeNode::new(0)));
  println!("Input:  root = {}", tree_show(&root2));
  Solution::flatten(&mut root2);
  println!("Output: {}", tree_show(&root2));

  let mut root3: Option<Box<TreeNode>> = None;
  println!("Input:  root = {}", tree_show(&root3));
  Solution::flatten(&mut root3);
  println!("Output: {}", tree_show(&root3));
}
