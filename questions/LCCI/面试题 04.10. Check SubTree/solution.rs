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
  pub fn check_sub_tree(t1: &Option<Box<TreeNode>>, t2: &Option<Box<TreeNode>>) -> bool {
    fn same(a: &Option<Box<TreeNode>>, b: &Option<Box<TreeNode>>) -> bool {
      match (a, b) {
        (None, None) => true,
        (Some(x), Some(y)) => {
          x.val == y.val && same(&x.left, &y.left) && same(&x.right, &y.right)
        }
        _ => false,
      }
    }
    if t2.is_none() {
      return true;
    }
    if t1.is_none() {
      return false;
    }
    same(t1, t2)
      || Solution::check_sub_tree(&t1.as_ref().unwrap().left, t2)
      || Solution::check_sub_tree(&t1.as_ref().unwrap().right, t2)
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let t1 = Some(Box::new(TreeNode {
    val: 3,
    left: Some(Box::new(TreeNode {
      val: 4,
      left: Some(Box::new(TreeNode::new(1))),
      right: Some(Box::new(TreeNode::new(2))),
    })),
    right: Some(Box::new(TreeNode::new(5))),
  }));
  let t2 = Some(Box::new(TreeNode {
    val: 4,
    left: Some(Box::new(TreeNode::new(1))),
    right: Some(Box::new(TreeNode::new(2))),
  }));
  println!("Input:  t1 = [3,4,5,1,2], t2 = [4,1,2]");
  println!("Output: {}", Solution::check_sub_tree(&t1, &t2));
}
