pub struct MinStack {
  data: Vec<i32>,
  mins: Vec<i32>,
}

// ------------------------------- solution begin -------------------------------
impl MinStack {
  pub fn new() -> Self {
    MinStack {
      data: vec![],
      mins: vec![],
    }
  }

  pub fn push(&mut self, x: i32) {
    self.data.push(x);
    let cur = if self.mins.is_empty() {
      x
    } else {
      x.min(*self.mins.last().unwrap())
    };
    self.mins.push(cur);
  }

  pub fn pop(&mut self) {
    self.data.pop();
    self.mins.pop();
  }

  pub fn top(&self) -> i32 {
    *self.data.last().unwrap()
  }

  pub fn get_min(&self) -> i32 {
    *self.mins.last().unwrap()
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  println!("Input:  [\"MinStack\", \"push\", \"push\", \"push\", \"getMin\", \"pop\", \"top\", \"getMin\"]");
  let mut obj = MinStack::new();
  obj.push(-2);
  obj.push(0);
  obj.push(-3);
  let a = obj.get_min();
  obj.pop();
  let b = obj.top();
  let c = obj.get_min();
  println!("Output: [null, null, null, null, {}, null, {}, {}]", a, b, c);
}
