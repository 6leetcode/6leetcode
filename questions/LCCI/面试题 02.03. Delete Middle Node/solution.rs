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
  pub fn delete_node(node: &mut ListNode) {
    let mut next = node.next.take().unwrap();
    node.val = next.val;
    node.next = next.next.take();
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
  let mut head = ints_to_list(vec![4, 5, 1, 9]);
  println!("Input:  {:?}", list_to_ints(head.clone()));
  {
    let second = head.as_mut().unwrap().next.as_mut().unwrap();
    Solution::delete_node(second);
  }
  println!("Output: {:?}", list_to_ints(head));
}
