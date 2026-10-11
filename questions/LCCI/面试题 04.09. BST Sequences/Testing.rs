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
  pub fn bst_sequences(root: Option<Box<TreeNode>>) -> Vec<Vec<i32>> {
    fn weave(l: &[i32], r: &[i32], prefix: &mut Vec<i32>, res: &mut Vec<Vec<i32>>) {
      if l.is_empty() && r.is_empty() {
        res.push(prefix.clone());
        return;
      }
      if !l.is_empty() {
        prefix.push(l[0]);
        weave(&l[1..], r, prefix, res);
        prefix.pop();
      }
      if !r.is_empty() {
        prefix.push(r[0]);
        weave(l, &r[1..], prefix, res);
        prefix.pop();
      }
    }
    match root {
      None => vec![vec![]],
      Some(node) => {
        let left = Solution::bst_sequences(node.left);
        let right = Solution::bst_sequences(node.right);
        let mut res = vec![];
        for l in &left {
          for r in &right {
            let mut prefix = vec![node.val];
            weave(l, r, &mut prefix, &mut res);
          }
        }
        res
      }
    }
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let root = Some(Box::new(TreeNode {
    val: 2,
    left: Some(Box::new(TreeNode::new(1))),
    right: Some(Box::new(TreeNode::new(3))),
  }));
  println!("Input:  [2, 1, 3]");
  println!("Output: {:?}", Solution::bst_sequences(root));
}
