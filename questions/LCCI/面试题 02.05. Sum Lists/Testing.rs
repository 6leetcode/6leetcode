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
  pub fn add_two_numbers(
    mut l1: Option<Box<ListNode>>,
    mut l2: Option<Box<ListNode>>,
  ) -> Option<Box<ListNode>> {
    let mut dummy = ListNode::new(0);
    let mut tail = &mut dummy;
    let mut carry = 0;
    while l1.is_some() || l2.is_some() || carry != 0 {
      let mut sum = carry;
      if let Some(node) = l1 {
        sum += node.val;
        l1 = node.next;
      }
      if let Some(node) = l2 {
        sum += node.val;
        l2 = node.next;
      }
      tail.next = Some(Box::new(ListNode::new(sum % 10)));
      tail = tail.next.as_mut().unwrap();
      carry = sum / 10;
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
  let l1 = ints_to_list(vec![7, 1, 6]);
  let l2 = ints_to_list(vec![5, 9, 2]);
  println!("Input:  {:?}, {:?}", list_to_ints(l1.clone()), list_to_ints(l2.clone()));
  let res = Solution::add_two_numbers(l1, l2);
  println!("Output: {:?}", list_to_ints(res));
}
