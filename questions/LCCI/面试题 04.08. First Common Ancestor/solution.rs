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
  pub fn lowest_common_ancestor(
    root: &Option<Box<TreeNode>>,
    p: i32,
    q: i32,
  ) -> Option<i32> {
    fn walk(node: &Option<Box<TreeNode>>, p: i32, q: i32) -> Option<(i32, bool, bool)> {
      if let Some(n) = node {
        let mut has_p = n.val == p;
        let mut has_q = n.val == q;
        if let Some((v, hp, hq)) = walk(&n.left, p, q) {
          if hp && hq {
            return Some((v, true, true));
          }
          has_p |= hp;
          has_q |= hq;
        }
        if let Some((v, hp, hq)) = walk(&n.right, p, q) {
          if hp && hq {
            return Some((v, true, true));
          }
          has_p |= hp;
          has_q |= hq;
        }
        if has_p && has_q {
          return Some((n.val, true, true));
        }
        return Some((0, has_p, has_q));
      }
      None
    }
    walk(root, p, q).map(|(v, _, _)| v)
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let root = Some(Box::new(TreeNode {
    val: 3,
    left: Some(Box::new(TreeNode::new(5))),
    right: Some(Box::new(TreeNode::new(1))),
  }));
  println!("Input:  root = [3, 5, 1], p = 5, q = 1");
  println!("Output: {}", Solution::lowest_common_ancestor(&root, 5, 1).unwrap());
}
