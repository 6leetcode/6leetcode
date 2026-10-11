pub struct Solution {}

#[derive(Debug)]
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
  pub fn inorder_traversal(root: Option<Box<TreeNode>>) -> Vec<i32> {
    fn inorder(node: &Option<Box<TreeNode>>, res: &mut Vec<i32>) {
      if let Some(n) = node {
        inorder(&n.left, res);
        res.push(n.val);
        inorder(&n.right, res);
      }
    }
    let mut res = vec![];
    inorder(&root, &mut res);
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let root = Some(Box::new(TreeNode {
    val: 1,
    left: Some(Box::new(TreeNode::new(2))),
    right: Some(Box::new(TreeNode::new(3))),
  }));
  println!("Input:  [1, 2, 3]");
  println!("Output: {:?}", Solution::inorder_traversal(root));
}
