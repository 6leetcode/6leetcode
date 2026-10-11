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
  pub fn partition(head: Option<Box<ListNode>>, x: i32) -> Option<Box<ListNode>> {
    let mut less_dummy = ListNode::new(0);
    let mut greater_dummy = ListNode::new(0);
    let mut less = &mut less_dummy;
    let mut greater = &mut greater_dummy;
    let mut cur = head;
    while let Some(mut node) = cur {
      cur = node.next.take();
      if node.val < x {
        less.next = Some(node);
        less = less.next.as_mut().unwrap();
      } else {
        greater.next = Some(node);
        greater = greater.next.as_mut().unwrap();
      }
    }
    less.next = greater_dummy.next;
    less_dummy.next
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
  let input1 = ints_to_list(vec![1, 4, 3, 2, 5, 2]);
  let input2 = 3;
  println!("Input:  {:?}, {}", list_to_ints(input1.clone()), input2);
  println!("Output: {:?}", list_to_ints(Solution::partition(input1, input2)));
}
