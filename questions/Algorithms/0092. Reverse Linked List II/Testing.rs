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
  pub fn reverse_between(
    head: Option<Box<ListNode>>,
    left: i32,
    right: i32,
  ) -> Option<Box<ListNode>> {
    let mut vals = vec![];
    let mut cur = head;
    while let Some(node) = cur {
      vals.push(node.val);
      cur = node.next;
    }
    let (l, r) = (left as usize - 1, right as usize);
    vals[l..r].reverse();

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
  let input1 = ints_to_list(vec![1, 2, 3, 4, 5]);
  let (input2, input3) = (2, 4);
  println!("Input:  {:?}, {}, {}", list_to_ints(input1.clone()), input2, input3);
  let res = Solution::reverse_between(input1, input2, input3);
  println!("Output: {:?}", list_to_ints(res));
}
