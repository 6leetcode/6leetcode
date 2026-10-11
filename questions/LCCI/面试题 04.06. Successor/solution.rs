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
  pub fn inorder_successor(root: &Option<Box<TreeNode>>, p: i32) -> Option<i32> {
    fn find(node: &Option<Box<TreeNode>>, val: i32) -> Option<&Box<TreeNode>> {
      match node {
        None => None,
        Some(n) => {
          if n.val == val {
            Some(n)
          } else if val < n.val {
            find(&n.left, val)
          } else {
            find(&n.right, val)
          }
        }
      }
    }
    let pnode = find(root, p).unwrap();
    if let Some(right) = &pnode.right {
      let mut node = right;
      while let Some(l) = &node.left {
        node = l;
      }
      return Some(node.val);
    }
    let mut succ = None;
    let mut node = root;
    while let Some(n) = node {
      if p < n.val {
        succ = Some(n.val);
        node = &n.left;
      } else if p > n.val {
        node = &n.right;
      } else {
        break;
      }
    }
    succ
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let root = Some(Box::new(TreeNode {
    val: 2,
    left: Some(Box::new(TreeNode::new(1))),
    right: Some(Box::new(TreeNode::new(3))),
  }));
  println!("Input:  root = [2, 1, 3], p = 1");
  match Solution::inorder_successor(&root, 1) {
    Some(v) => println!("Output: {}", v),
    None => println!("Output: null"),
  }
}
