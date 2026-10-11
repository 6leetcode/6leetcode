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
  fn collect(node: &Option<Box<TreeNode>>, vals: &mut Vec<i32>) {
    if let Some(n) = node {
      Self::collect(&n.left, vals);
      vals.push(n.val);
      Self::collect(&n.right, vals);
    }
  }

  fn assign(node: &mut Option<Box<TreeNode>>, vals: &[i32], idx: &mut usize) {
    if let Some(n) = node {
      Self::assign(&mut n.left, vals, idx);
      n.val = vals[*idx];
      *idx += 1;
      Self::assign(&mut n.right, vals, idx);
    }
  }

  pub fn recover_tree(root: &mut Option<Box<TreeNode>>) {
    let mut vals = vec![];
    Self::collect(root, &mut vals);
    let n = vals.len();
    let mut i = 0;
    while i < n - 1 && vals[i] < vals[i + 1] {
      i += 1;
    }
    let mut j = n - 1;
    while j > 0 && vals[j - 1] < vals[j] {
      j -= 1;
    }
    vals.swap(i, j);
    let mut idx = 0;
    Self::assign(root, &vals, &mut idx);
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let mut root = Some(Box::new(TreeNode {
    val: 1,
    left: None,
    right: Some(Box::new(TreeNode {
      val: 3,
      left: None,
      right: Some(Box::new(TreeNode::new(2))),
    })),
  }));
  println!("Input:  [1, 3, null, null, 2]");
  Solution::recover_tree(&mut root);
  let mut vals = vec![];
  fn inorder(node: &Option<Box<TreeNode>>, vals: &mut Vec<i32>) {
    if let Some(n) = node {
      inorder(&n.left, vals);
      vals.push(n.val);
      inorder(&n.right, vals);
    }
  }
  inorder(&root, &mut vals);
  println!("Output: {:?}", vals);
}
