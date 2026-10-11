pub struct MyQueue {
  in_stack: Vec<i32>,
  out_stack: Vec<i32>,
}

// ------------------------------- solution begin -------------------------------
impl MyQueue {
  pub fn new() -> Self {
    MyQueue {
      in_stack: vec![],
      out_stack: vec![],
    }
  }

  pub fn push(&mut self, x: i32) {
    self.in_stack.push(x);
  }

  fn transfer(&mut self) {
    if self.out_stack.is_empty() {
      while let Some(v) = self.in_stack.pop() {
        self.out_stack.push(v);
      }
    }
  }

  pub fn pop(&mut self) -> i32 {
    self.transfer();
    self.out_stack.pop().unwrap()
  }

  pub fn peek(&mut self) -> i32 {
    self.transfer();
    *self.out_stack.last().unwrap()
  }

  pub fn empty(&self) -> bool {
    self.in_stack.is_empty() && self.out_stack.is_empty()
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  println!("Input:  [\"MyQueue\", \"push\", \"push\", \"peek\", \"pop\", \"empty\"]");
  let mut obj = MyQueue::new();
  obj.push(1);
  obj.push(2);
  let p = obj.peek();
  let q = obj.pop();
  let e = obj.empty();
  println!("Output: [null, null, null, {}, {}, {}]", p, q, e);
}
