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
  pub fn insertion_sort_list(head: Option<Box<ListNode>>) -> Option<Box<ListNode>> {
    let mut dummy = ListNode::new(0);
    let mut cur = head;
    while let Some(mut node) = cur {
      cur = node.next.take();
      let mut prev = &mut dummy;
      while prev.next.is_some() && prev.next.as_ref().unwrap().val < node.val {
        prev = prev.next.as_mut().unwrap();
      }
      node.next = prev.next.take();
      prev.next = Some(node);
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

fn run(nums: Vec<i32>) {
  let input = ints_to_list(nums);
  println!("Input:  {:?}", list_to_ints(input.clone()));
  println!("Output: {:?}", list_to_ints(Solution::insertion_sort_list(input)));
}

fn main() {
  run(vec![4, 2, 1, 3]);
  run(vec![-1, 5, 3, 4, 0]);
}
