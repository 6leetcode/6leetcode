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
  pub fn build_tree(preorder: Vec<i32>, inorder: Vec<i32>) -> Option<Box<TreeNode>> {
    Self::build(&preorder, &inorder)
  }

  fn build(preorder: &[i32], inorder: &[i32]) -> Option<Box<TreeNode>> {
    if preorder.is_empty() {
      return None;
    }
    let root_val = preorder[0];
    let idx = inorder.iter().position(|&x| x == root_val).unwrap();
    let mut root = Box::new(TreeNode::new(root_val));
    root.left = Self::build(&preorder[1..1 + idx], &inorder[..idx]);
    root.right = Self::build(&preorder[1 + idx..], &inorder[idx + 1..]);
    Some(root)
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
  let preorder1 = vec![3, 9, 20, 15, 7];
  let inorder1 = vec![9, 3, 15, 20, 7];
  println!("Input:  preorder = {:?}, inorder = {:?}", preorder1, inorder1);
  let root1 = Solution::build_tree(preorder1.clone(), inorder1.clone());
  println!("Output: {}", tree_show(&root1));

  let preorder2 = vec![-1];
  let inorder2 = vec![-1];
  println!("Input:  preorder = {:?}, inorder = {:?}", preorder2, inorder2);
  let root2 = Solution::build_tree(preorder2.clone(), inorder2.clone());
  println!("Output: {}", tree_show(&root2));
}
