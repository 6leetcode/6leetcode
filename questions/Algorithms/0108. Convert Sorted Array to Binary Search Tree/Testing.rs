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
  pub fn sorted_array_to_bst(nums: Vec<i32>) -> Option<Box<TreeNode>> {
    Self::build(&nums)
  }

  fn build(nums: &[i32]) -> Option<Box<TreeNode>> {
    if nums.is_empty() {
      return None;
    }
    let mid = nums.len() / 2;
    let mut root = Box::new(TreeNode::new(nums[mid]));
    root.left = Self::build(&nums[..mid]);
    root.right = Self::build(&nums[mid + 1..]);
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
  let nums1 = vec![-10, -3, 0, 5, 9];
  println!("Input:  nums = {:?}", nums1);
  let root1 = Solution::sorted_array_to_bst(nums1.clone());
  println!("Output: {}", tree_show(&root1));

  let nums2 = vec![1, 3];
  println!("Input:  nums = {:?}", nums2);
  let root2 = Solution::sorted_array_to_bst(nums2.clone());
  println!("Output: {}", tree_show(&root2));
}
