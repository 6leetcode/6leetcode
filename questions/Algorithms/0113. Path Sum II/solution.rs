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
  pub fn path_sum(root: Option<Box<TreeNode>>, target_sum: i32) -> Vec<Vec<i32>> {
    fn dfs(
      node: &Option<Box<TreeNode>>,
      remain: i32,
      path: &mut Vec<i32>,
      res: &mut Vec<Vec<i32>>,
    ) {
      if let Some(n) = node {
        path.push(n.val);
        let rest = remain - n.val;
        if n.left.is_none() && n.right.is_none() {
          if rest == 0 {
            res.push(path.clone());
          }
        } else {
          dfs(&n.left, rest, path, res);
          dfs(&n.right, rest, path, res);
        }
        path.pop();
      }
    }

    let mut res = Vec::new();
    let mut path = Vec::new();
    dfs(&root, target_sum, &mut path, &mut res);
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let root1 = Some(Box::new(TreeNode {
    val: 5,
    left: Some(Box::new(TreeNode {
      val: 4,
      left: Some(Box::new(TreeNode {
        val: 11,
        left: Some(Box::new(TreeNode::new(7))),
        right: Some(Box::new(TreeNode::new(2))),
      })),
      right: None,
    })),
    right: Some(Box::new(TreeNode {
      val: 8,
      left: Some(Box::new(TreeNode::new(13))),
      right: Some(Box::new(TreeNode {
        val: 4,
        left: Some(Box::new(TreeNode::new(5))),
        right: Some(Box::new(TreeNode::new(1))),
      })),
    })),
  }));

  let root2 = Some(Box::new(TreeNode {
    val: 1,
    left: Some(Box::new(TreeNode::new(2))),
    right: Some(Box::new(TreeNode::new(3))),
  }));

  let root3 = Some(Box::new(TreeNode {
    val: 1,
    left: Some(Box::new(TreeNode::new(2))),
    right: None,
  }));

  println!("Input:  [5, 4, 8, 11, null, 13, 4, 7, 2, null, null, 5, 1], targetSum = 22");
  println!("Output: {:?}", Solution::path_sum(root1, 22));

  println!("Input:  [1, 2, 3], targetSum = 5");
  println!("Output: {:?}", Solution::path_sum(root2.clone(), 5));

  println!("Input:  [1, 2], targetSum = 0");
  println!("Output: {:?}", Solution::path_sum(root3, 0));

  println!("Input:  [1, 2, 3], targetSum = 3");
  println!("Output: {:?}", Solution::path_sum(root2, 3));
}
