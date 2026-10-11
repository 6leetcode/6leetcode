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
  pub fn sorted_array_to_bst(nums: Vec<i32>) -> Option<Box<TreeNode>> {
    fn build(nums: &[i32], lo: i32, hi: i32) -> Option<Box<TreeNode>> {
      if lo > hi {
        return None;
      }
      let mid = lo + (hi - lo) / 2;
      Some(Box::new(TreeNode {
        val: nums[mid as usize],
        left: build(nums, lo, mid - 1),
        right: build(nums, mid + 1, hi),
      }))
    }
    build(&nums, 0, nums.len() as i32 - 1)
  }
}
// ------------------------------- solution end ---------------------------------

fn preorder(node: &Option<Box<TreeNode>>, out: &mut Vec<i32>) {
  if let Some(n) = node {
    out.push(n.val);
    preorder(&n.left, out);
    preorder(&n.right, out);
  }
}

fn main() {
  let nums = vec![-10, -3, 0, 5, 9];
  println!("Input:  [-10, -3, 0, 5, 9]");
  let root = Solution::sorted_array_to_bst(nums);
  let mut out = vec![];
  preorder(&root, &mut out);
  println!("Output: {:?}", out);
}
