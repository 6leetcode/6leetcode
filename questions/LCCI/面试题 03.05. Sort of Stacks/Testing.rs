pub struct SortedStack {
  data: Vec<i32>,
}

// ------------------------------- solution begin -------------------------------
impl SortedStack {
  pub fn new() -> Self {
    SortedStack { data: vec![] }
  }

  pub fn push(&mut self, val: i32) {
    let mut tmp = vec![];
    while let Some(&top) = self.data.last() {
      if top < val {
        tmp.push(self.data.pop().unwrap());
      } else {
        break;
      }
    }
    self.data.push(val);
    while let Some(v) = tmp.pop() {
      self.data.push(v);
    }
  }

  pub fn pop(&mut self) {
    self.data.pop();
  }

  pub fn peek(&self) -> i32 {
    *self.data.last().unwrap_or(&-1)
  }

  pub fn is_empty(&self) -> bool {
    self.data.is_empty()
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  println!("Input:  [\"SortedStack\", \"push\", \"push\", \"peek\", \"pop\", \"peek\"]");
  let mut obj = SortedStack::new();
  obj.push(1);
  obj.push(2);
  let a = obj.peek();
  obj.pop();
  let b = obj.peek();
  println!("Output: [null, null, null, {}, null, {}]", a, b);
}
