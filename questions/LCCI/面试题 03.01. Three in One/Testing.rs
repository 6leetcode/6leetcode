pub struct TripleInOne {
  arr: Vec<i32>,
  size: usize,
  top: [usize; 3],
}

// ------------------------------- solution begin -------------------------------
impl TripleInOne {
  pub fn new(stack_size: i32) -> Self {
    let size = stack_size as usize;
    TripleInOne {
      arr: vec![0; 3 * size],
      size,
      top: [0, 0, 0],
    }
  }

  pub fn push(&mut self, stack_num: i32, value: i32) {
    let s = stack_num as usize;
    if self.top[s] < self.size {
      self.arr[s * self.size + self.top[s]] = value;
      self.top[s] += 1;
    }
  }

  pub fn pop(&mut self, stack_num: i32) -> i32 {
    let s = stack_num as usize;
    if self.top[s] == 0 {
      return -1;
    }
    self.top[s] -= 1;
    self.arr[s * self.size + self.top[s]]
  }

  pub fn peek(&self, stack_num: i32) -> i32 {
    let s = stack_num as usize;
    if self.top[s] == 0 {
      return -1;
    }
    self.arr[s * self.size + self.top[s] - 1]
  }

  pub fn is_empty(&self, stack_num: i32) -> bool {
    self.top[stack_num as usize] == 0
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  println!("Input:  [\"TripleInOne\", \"push\", \"push\", \"pop\", \"pop\", \"pop\", \"isEmpty\"]");
  let mut obj = TripleInOne::new(1);
  obj.push(0, 1);
  obj.push(0, 2);
  println!(
    "Output: [null, null, null, {}, {}, {}, {}]",
    obj.pop(0),
    obj.pop(0),
    obj.pop(0),
    obj.is_empty(0)
  );
}
