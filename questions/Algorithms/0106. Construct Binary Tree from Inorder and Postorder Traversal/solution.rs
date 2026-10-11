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
  pub fn build_tree(inorder: Vec<i32>, postorder: Vec<i32>) -> Option<Box<TreeNode>> {
    Self::build(&inorder, &postorder)
  }

  fn build(inorder: &[i32], postorder: &[i32]) -> Option<Box<TreeNode>> {
    if inorder.is_empty() {
      return None;
    }
    let root_val = postorder[postorder.len() - 1];
    let idx = inorder.iter().position(|&x| x == root_val).unwrap();
    let mut root = Box::new(TreeNode::new(root_val));
    root.left = Self::build(&inorder[..idx], &postorder[..idx]);
    root.right = Self::build(&inorder[idx + 1..], &postorder[idx..postorder.len() - 1]);
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
  let inorder1 = vec![9, 3, 15, 20, 7];
  let postorder1 = vec![9, 15, 7, 20, 3];
  println!("Input:  inorder = {:?}, postorder = {:?}", inorder1, postorder1);
  let root1 = Solution::build_tree(inorder1.clone(), postorder1.clone());
  println!("Output: {}", tree_show(&root1));

  let inorder2 = vec![-1];
  let postorder2 = vec![-1];
  println!("Input:  inorder = {:?}, postorder = {:?}", inorder2, postorder2);
  let root2 = Solution::build_tree(inorder2.clone(), postorder2.clone());
  println!("Output: {}", tree_show(&root2));
}
