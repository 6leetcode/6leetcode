pub struct StackOfPlates {
  cap: usize,
  stacks: Vec<Vec<i32>>,
}

// ------------------------------- solution begin -------------------------------
impl StackOfPlates {
  pub fn new(cap: i32) -> Self {
    StackOfPlates {
      cap: cap as usize,
      stacks: vec![],
    }
  }

  pub fn push(&mut self, val: i32) {
    if self.cap == 0 {
      return;
    }
    if self.stacks.is_empty() || self.stacks.last().unwrap().len() == self.cap {
      self.stacks.push(vec![]);
    }
    self.stacks.last_mut().unwrap().push(val);
  }

  pub fn pop(&mut self) -> i32 {
    if self.stacks.is_empty() {
      return -1;
    }
    let last = self.stacks.last_mut().unwrap();
    let v = last.pop().unwrap();
    if last.is_empty() {
      self.stacks.pop();
    }
    v
  }

  pub fn pop_at(&mut self, index: i32) -> i32 {
    if index < 0 || index as usize >= self.stacks.len() {
      return -1;
    }
    let idx = index as usize;
    let v = self.stacks[idx].pop().unwrap();
    if self.stacks[idx].is_empty() {
      self.stacks.remove(idx);
    }
    v
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  println!("Input:  [\"StackOfPlates\", \"push\", \"push\", \"push\", \"popAt\", \"popAt\", \"popAt\"]");
  let mut obj = StackOfPlates::new(2);
  obj.push(1);
  obj.push(2);
  obj.push(3);
  let a = obj.pop_at(0);
  let b = obj.pop_at(0);
  let c = obj.pop_at(0);
  println!("Output: [null, null, null, null, {}, {}, {}]", a, b, c);
}
