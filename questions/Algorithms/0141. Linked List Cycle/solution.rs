pub struct Solution {}

pub struct ListNode {
  pub val: i32,
  pub next: *mut ListNode,
}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn has_cycle(head: *mut ListNode) -> bool {
    let mut slow = head;
    let mut fast = head;
    unsafe {
      while !fast.is_null() && !(*fast).next.is_null() {
        slow = (*slow).next;
        fast = (*(*fast).next).next;
        if slow == fast {
          return true;
        }
      }
    }
    false
  }
}
// ------------------------------- solution end ---------------------------------

fn build(vals: &[i32], pos: i32) -> (Vec<Box<ListNode>>, *mut ListNode) {
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
  let head = if n == 0 { std::ptr::null_mut() } else { ptrs[0] };
  (nodes, head)
}

fn run(vals: Vec<i32>, pos: i32) {
  println!("Input:  head = {:?}, pos = {}", vals, pos);
  let (_arena, head) = build(&vals, pos);
  println!("Output: {}", Solution::has_cycle(head));
}

fn main() {
  run(vec![3, 2, 0, -4], 1);
  run(vec![1, 2], 0);
  run(vec![1], -1);
  run(vec![], -1);
}
