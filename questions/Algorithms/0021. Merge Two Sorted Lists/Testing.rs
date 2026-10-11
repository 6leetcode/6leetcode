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
  pub fn merge_two_lists(
    l1: Option<Box<ListNode>>,
    l2: Option<Box<ListNode>>,
  ) -> Option<Box<ListNode>> {
    match (l1, l2) {
      (None, None) => None,
      (Some(a), None) => Some(a),
      (None, Some(b)) => Some(b),
      (Some(mut a), Some(mut b)) => {
        if a.val < b.val {
          a.next = Solution::merge_two_lists(a.next.take(), Some(b));
          Some(a)
        } else {
          b.next = Solution::merge_two_lists(Some(a), b.next.take());
          Some(b)
        }
      }
    }
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
  let l1 = ints_to_list(vec![1, 2, 4]);
  let l2 = ints_to_list(vec![1, 3, 4]);
  println!("Input:  {:?} {:?}", list_to_ints(l1.clone()), list_to_ints(l2.clone()));
  let res = Solution::merge_two_lists(l1, l2);
  println!("Output: {:?}", list_to_ints(res));
}
