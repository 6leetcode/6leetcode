pub struct Solution {}

pub struct ListNode {
  pub val: i32,
  pub next: *mut ListNode,
}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn detect_cycle(head: *mut ListNode) -> *mut ListNode {
    let mut slow = head;
    let mut fast = head;
    unsafe {
      while !fast.is_null() && !(*fast).next.is_null() {
        slow = (*slow).next;
        fast = (*(*fast).next).next;
        if slow == fast {
          let mut p = head;
          while p != slow {
            p = (*p).next;
            slow = (*slow).next;
          }
          return p;
        }
      }
    }
    std::ptr::null_mut()
  }
}
// ------------------------------- solution end ---------------------------------

fn build(vals: &[i32], pos: i32) -> (Vec<Box<ListNode>>, Vec<*mut ListNode>) {
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
  if pos >= 0 && n > 0 {
    unsafe {
      (*ptrs[n - 1]).next = ptrs[pos as usize];
    }
  }
  (nodes, ptrs)
}

fn run(vals: Vec<i32>, pos: i32) {
  println!("Input:  head = {:?}, pos = {}", vals, pos);
  let (_arena, ptrs) = build(&vals, pos);
  let head = if ptrs.is_empty() {
    std::ptr::null_mut()
  } else {
    ptrs[0]
  };
  let res = Solution::detect_cycle(head);
  let mut idx: i32 = -1;
  for (i, &p) in ptrs.iter().enumerate() {
    if p == res {
      idx = i as i32;
      break;
    }
  }
  if idx < 0 {
    println!("Output: null");
  } else {
    println!("Output: {}", idx);
  }
}

fn main() {
  run(vec![3, 2, 0, -4], 1);
  run(vec![1, 2], 0);
  run(vec![1], -1);
  run(vec![], -1);
}
