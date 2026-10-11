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
  pub fn postorder_traversal(root: Option<Box<TreeNode>>) -> Vec<i32> {
    fn dfs(node: &Option<Box<TreeNode>>, out: &mut Vec<i32>) {
      if let Some(n) = node {
        dfs(&n.left, out);
        dfs(&n.right, out);
        out.push(n.val);
      }
    }

    let mut out = Vec::new();
    dfs(&root, &mut out);
    out
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let root1 = Some(Box::new(TreeNode {
    val: 1,
    left: None,
    right: Some(Box::new(TreeNode {
      val: 2,
      left: Some(Box::new(TreeNode::new(3))),
      right: None,
    })),
  }));

  let root2 = Some(Box::new(TreeNode::new(1)));

  let root3 = Some(Box::new(TreeNode {
    val: 1,
    left: Some(Box::new(TreeNode {
      val: 2,
      left: Some(Box::new(TreeNode::new(4))),
      right: Some(Box::new(TreeNode::new(5))),
    })),
    right: Some(Box::new(TreeNode::new(3))),
  }));

  println!("Input:  [1, null, 2, 3]");
  println!("Output: {:?}", Solution::postorder_traversal(root1));

  println!("Input:  []");
  println!("Output: {:?}", Solution::postorder_traversal(None));

  println!("Input:  [1]");
  println!("Output: {:?}", Solution::postorder_traversal(root2));

  println!("Input:  [1, 2, 3, 4, 5]");
  println!("Output: {:?}", Solution::postorder_traversal(root3));
}
