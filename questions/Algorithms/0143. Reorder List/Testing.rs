pub struct Solution {}

pub struct ListNode {
  pub val: i32,
  pub next: *mut ListNode,
}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn reorder_list(head: *mut ListNode) {
    if head.is_null() || unsafe { (*head).next.is_null() } {
      return;
    }

    let mut slow = head;
    let mut fast = head;
    unsafe {
      while !(*fast).next.is_null() && !(*(*fast).next).next.is_null() {
        slow = (*slow).next;
        fast = (*(*fast).next).next;
      }
    }

    let mid = slow;
    let mut second = unsafe { (*mid).next };
    unsafe {
      (*mid).next = std::ptr::null_mut();
    }

    let mut prev: *mut ListNode = std::ptr::null_mut();
    while !second.is_null() {
      let nxt = unsafe { (*second).next };
      unsafe {
        (*second).next = prev;
      }
      prev = second;
      second = nxt;
    }

    let mut first = head;
    second = prev;
    while !second.is_null() {
      let fnext = unsafe { (*first).next };
      let snext = unsafe { (*second).next };
      unsafe {
        (*first).next = second;
        (*second).next = fnext;
      }
      first = fnext;
      second = snext;
    }
  }
}
// ------------------------------- solution end ---------------------------------

fn build(vals: &[i32]) -> (Vec<Box<ListNode>>, *mut ListNode) {
  let mut nodes: Vec<Box<ListNode>> = vals
    .iter()
    .map(|&v| {
      Box::new(ListNode {
        val: v,
        next: std::ptr::null_mut(),
      })
    })
    .collect();
  let mut ptrs: Vec<*mut ListNode> = nodes.iter_mut().map(|b| &mut **b as *mut ListNode).collect();
  let n = ptrs.len();
  for i in 0..n.saturating_sub(1) {
    unsafe {
      (*ptrs[i]).next = ptrs[i + 1];
    }
  }
  let head = if n == 0 { std::ptr::null_mut() } else { ptrs[0] };
  (nodes, head)
}

fn list_to_ints(mut head: *mut ListNode) -> Vec<i32> {
  let mut res = vec![];
  while !head.is_null() {
    unsafe {
      res.push((*head).val);
      head = (*head).next;
    }
  }
  res
}

fn run(vals: Vec<i32>) {
  println!("Input:  {:?}", vals);
  let (_arena, head) = build(&vals);
  Solution::reorder_list(head);
  println!("Output: {:?}", list_to_ints(head));
}

fn main() {
  run(vec![1, 2, 3, 4]);
  run(vec![1, 2, 3, 4, 5]);
  run(vec![1]);
}
