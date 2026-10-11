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
  pub fn convert_bi_node(root: Option<Box<TreeNode>>) -> Option<Box<TreeNode>> {
    let mut vals = vec![];
    fn inorder(node: &Option<Box<TreeNode>>, vals: &mut Vec<i32>) {
      if let Some(n) = node {
        inorder(&n.left, vals);
        vals.push(n.val);
        inorder(&n.right, vals);
      }
    }
    inorder(&root, &mut vals);
    let mut dummy = TreeNode::new(0);
    let mut tail = &mut dummy;
    for v in vals {
      tail.right = Some(Box::new(TreeNode::new(v)));
      tail = tail.right.as_mut().unwrap();
    }
    dummy.right
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let n4 = Some(Box::new(TreeNode {
    val: 4,
    left: Some(Box::new(TreeNode {
      val: 2,
      left: Some(Box::new(TreeNode {
        val: 1,
        left: Some(Box::new(TreeNode::new(0))),
        right: None,
      })),
      right: Some(Box::new(TreeNode::new(3))),
    })),
    right: Some(Box::new(TreeNode {
      val: 5,
      left: None,
      right: Some(Box::new(TreeNode::new(6))),
    })),
  }));
  println!("Input:  [4,2,5,1,3,null,6,0]");
  let mut head = Solution::convert_bi_node(n4);
  let mut out = vec![];
  while let Some(node) = head {
    out.push(format!("{}, null", node.val));
    head = node.right;
  }
  println!("Output: [{}]", out.join(", "));
}
