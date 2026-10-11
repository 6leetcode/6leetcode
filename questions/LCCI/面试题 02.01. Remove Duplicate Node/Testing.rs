use std::collections::HashSet;

pub struct Solution {}

#[derive(PartialEq, Eq, Clone, Debug)]
pub struct ListNode {
  pub val: i32,
  pub next: Option<Box<ListNode>>,
}

impl ListNode {
  #[inline]
  fn new(val: i32) -> Self {
    ListNode { val, next: None }
  }
}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn remove_duplicate_nodes(head: Option<Box<ListNode>>) -> Option<Box<ListNode>> {
    let mut seen = HashSet::new();
    let mut vals = vec![];
    let mut cur = head;
    while let Some(node) = cur {
      if seen.insert(node.val) {
        vals.push(node.val);
      }
      cur = node.next;
    }
    let mut dummy = ListNode::new(0);
    let mut tail = &mut dummy;
    for v in vals {
      tail.next = Some(Box::new(ListNode::new(v)));
      tail = tail.next.as_mut().unwrap();
    }
    dummy.next
  }
}
// ------------------------------- solution end ---------------------------------

fn ints_to_list(nums: Vec<i32>) -> Option<Box<ListNode>> {
  let mut dummy = ListNode::new(0);
  let mut cur = &mut dummy;
  for n in nums {
    cur.next = Some(Box::new(ListNode::new(n)));
    cur = cur.next.as_mut().unwrap();
  }
  dummy.next
}

fn list_to_ints(mut head: Option<Box<ListNode>>) -> Vec<i32> {
  let mut res = vec![];
  while let Some(node) = head {
    res.push(node.val);
    head = node.next;
  }
  res
}

fn main() {
  let input = ints_to_list(vec![1, 2, 3, 3, 2, 1]);
  println!("Input:  {:?}", list_to_ints(input.clone()));
  println!("Output: {:?}", list_to_ints(Solution::remove_duplicate_nodes(input)));
}
