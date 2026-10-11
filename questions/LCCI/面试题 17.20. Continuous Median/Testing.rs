use std::cmp::Reverse;
use std::collections::BinaryHeap;

pub struct MedianFinder {
  lower: BinaryHeap<i32>,
  upper: BinaryHeap<Reverse<i32>>,
}

// ------------------------------- solution begin -------------------------------
impl MedianFinder {
  pub fn new() -> Self {
    MedianFinder {
      lower: BinaryHeap::new(),
      upper: BinaryHeap::new(),
    }
  }

  pub fn add_num(&mut self, num: i32) {
    self.lower.push(num);
    self.upper.push(Reverse(self.lower.pop().unwrap()));
    if self.lower.len() < self.upper.len() {
      self.lower.push(self.upper.pop().unwrap().0);
    }
  }

  pub fn find_median(&self) -> f64 {
    if self.lower.len() > self.upper.len() {
      *self.lower.peek().unwrap() as f64
    } else {
      (*self.lower.peek().unwrap() as f64 + self.upper.peek().unwrap().0 as f64) / 2.0
    }
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  println!("Input:  addNum(1), addNum(2), findMedian(), addNum(3), findMedian()");
  let mut obj = MedianFinder::new();
  obj.add_num(1);
  obj.add_num(2);
  let a = obj.find_median();
  obj.add_num(3);
  let b = obj.find_median();
  println!("Output: [{}, {}]", a, b);
}
