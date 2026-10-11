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
  pub fn sort_list(head: Option<Box<ListNode>>) -> Option<Box<ListNode>> {
    let mut len = 0;
    let mut p = head.as_ref();
    while let Some(node) = p {
      len += 1;
      p = node.next.as_ref();
    }
    if len < 2 {
      return head;
    }

    let mut head = head;
    let mut split = &mut head;
    for _ in 0..(len / 2 - 1) {
      split = &mut split.as_mut().unwrap().next;
    }
    let right = split.as_mut().unwrap().next.take();
    let left = head;

    Solution::merge_two_lists(Solution::sort_list(left), Solution::sort_list(right))
  }

  fn merge_two_lists(a: Option<Box<ListNode>>, b: Option<Box<ListNode>>) -> Option<Box<ListNode>> {
    let mut dummy = ListNode::new(0);
    let mut tail = &mut dummy;
    let mut a = a;
    let mut b = b;
    while a.is_some() && b.is_some() {
      let take_a = a.as_ref().unwrap().val <= b.as_ref().unwrap().val;
      let mut node = if take_a { a.take().unwrap() } else { b.take().unwrap() };
      let next = node.next.take();
      tail.next = Some(node);
      tail = tail.next.as_mut().unwrap();
      if take_a {
        a = next;
      } else {
        b = next;
      }
    }
    tail.next = if a.is_some() { a } else { b };
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

fn run(nums: Vec<i32>) {
  let input = ints_to_list(nums);
  println!("Input:  {:?}", list_to_ints(input.clone()));
  println!("Output: {:?}", list_to_ints(Solution::sort_list(input)));
}

fn main() {
  run(vec![4, 2, 1, 3]);
  run(vec![-1, 5, 3, 4, 0]);
  run(vec![]);
}
