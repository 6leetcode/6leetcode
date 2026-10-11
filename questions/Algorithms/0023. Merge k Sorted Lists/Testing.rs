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
  fn merge_two_lists(
    a: Option<Box<ListNode>>,
    b: Option<Box<ListNode>>,
  ) -> Option<Box<ListNode>> {
    match (a, b) {
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

  pub fn merge_k_lists(lists: Vec<Option<Box<ListNode>>>) -> Option<Box<ListNode>> {
    let mut ans: Option<Box<ListNode>> = None;
    for l in lists {
      ans = Solution::merge_two_lists(ans, l);
    }
    ans
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
  let lists = vec![
    ints_to_list(vec![1, 4, 5]),
    ints_to_list(vec![1, 3, 4]),
    ints_to_list(vec![2, 6]),
  ];
  println!(
    "Input:  {:?}",
    lists.iter().map(|l| list_to_ints(l.clone())).collect::<Vec<_>>()
  );
  let res = Solution::merge_k_lists(lists);
  println!("Output: {:?}", list_to_ints(res));
}
