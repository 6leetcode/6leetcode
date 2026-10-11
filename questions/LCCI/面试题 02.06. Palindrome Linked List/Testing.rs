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
  pub fn is_palindrome(head: Option<Box<ListNode>>) -> bool {
    let mut vals = vec![];
    let mut cur = head;
    while let Some(node) = cur {
      vals.push(node.val);
      cur = node.next;
    }
    let mut i = 0;
    let mut j = vals.len() as i32 - 1;
    while i < j {
      if vals[i as usize] != vals[j as usize] {
        return false;
      }
      i += 1;
      j -= 1;
    }
    true
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
  let input = ints_to_list(vec![1, 2, 2, 1]);
  println!("Input:  {:?}", list_to_ints(input.clone()));
  println!("Output: {}", Solution::is_palindrome(input));
}
