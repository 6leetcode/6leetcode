pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn detect_cycle(values: Vec<i32>, pos: i32) -> Option<i32> {
    let n = values.len() as i32;
    if pos < 0 {
      return None;
    }
    let next = |i: i32| -> i32 {
      if i == n - 1 {
        pos
      } else {
        i + 1
      }
    };
    let mut slow = 0i32;
    let mut fast = 0i32;
    loop {
      slow = next(slow);
      fast = next(next(fast));
      if slow == fast {
        break;
      }
    }
    let mut p = 0i32;
    while p != slow {
      p = next(p);
      slow = next(slow);
    }
    Some(values[p as usize])
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let values = vec![3, 2, 0, -4];
  let pos = 1;
  println!("Input:  {:?}, pos = {}", values, pos);
  match Solution::detect_cycle(values, pos) {
    Some(v) => println!("Output: tail connects to node with value {}", v),
    None => println!("Output: no cycle"),
  }
}
