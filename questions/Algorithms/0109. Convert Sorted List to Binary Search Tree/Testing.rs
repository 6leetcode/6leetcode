use std::collections::VecDeque;

pub struct Solution {}

#[derive(Clone)]
pub struct ListNode {
  pub val: i32,
  pub next: Option<Box<ListNode>>,
}

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
  pub fn sorted_list_to_bst(head: Option<Box<ListNode>>) -> Option<Box<TreeNode>> {
    let mut nums = vec![];
    let mut cur = head;
    while let Some(node) = cur {
      nums.push(node.val);
      cur = node.next;
    }
    Self::build(&nums)
  }

  fn build(nums: &[i32]) -> Option<Box<TreeNode>> {
    if nums.is_empty() {
      return None;
    }
    let mid = nums.len() / 2;
    let mut root = Box::new(TreeNode::new(nums[mid]));
    root.left = Self::build(&nums[..mid]);
    root.right = Self::build(&nums[mid + 1..]);
    Some(root)
  }
}
// ------------------------------- solution end ---------------------------------

fn tree_show(root: &Option<Box<TreeNode>>) -> String {
  if root.is_none() {
    return "[]".to_string();
  }
  let mut parts: Vec<String> = Vec::new();
  let mut queue: VecDeque<Option<&TreeNode>> = VecDeque::new();
  queue.push_back(root.as_ref().map(|n| n.as_ref()));
  while let Some(cur) = queue.pop_front() {
    match cur {
      Some(node) => {
        parts.push(node.val.to_string());
        queue.push_back(node.left.as_ref().map(|n| n.as_ref()));
        queue.push_back(node.right.as_ref().map(|n| n.as_ref()));
      }
      None => parts.push("null".to_string()),
    }
  }
  while parts.last().map_or(false, |p| p == "null") {
    parts.pop();
  }
  format!("[{}]", parts.join(", "))
}

fn ints_to_list(nums: Vec<i32>) -> Option<Box<ListNode>> {
  let mut dummy = ListNode { val: 0, next: None };
  let mut cur = &mut dummy;
  for n in nums {
    cur.next = Some(Box::new(ListNode { val: n, next: None }));
    cur = cur.next.as_mut().unwrap();
  }
  dummy.next
}

fn main() {
  let head1 = ints_to_list(vec![-10, -3, 0, 5, 9]);
  println!("Input:  head = {:?}", vec![-10, -3, 0, 5, 9]);
  println!("Output: {}", tree_show(&Solution::sorted_list_to_bst(head1)));

  let head2 = ints_to_list(vec![]);
  println!("Input:  head = {:?}", Vec::<i32>::new());
  println!("Output: {}", tree_show(&Solution::sorted_list_to_bst(head2)));
}
