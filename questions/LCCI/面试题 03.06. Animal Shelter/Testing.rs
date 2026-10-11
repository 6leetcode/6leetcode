use std::collections::VecDeque;

pub struct AnimalShelf {
  cats: VecDeque<(i32, i32)>,
  dogs: VecDeque<(i32, i32)>,
  order: i32,
}

// ------------------------------- solution begin -------------------------------
impl AnimalShelf {
  pub fn new() -> Self {
    AnimalShelf {
      cats: VecDeque::new(),
      dogs: VecDeque::new(),
      order: 0,
    }
  }

  pub fn enqueue(&mut self, animal: Vec<i32>) {
    if animal[1] == 0 {
      self.cats.push_back((animal[0], self.order));
    } else {
      self.dogs.push_back((animal[0], self.order));
    }
    self.order += 1;
  }

  pub fn dequeue_any(&mut self) -> Vec<i32> {
    if self.cats.is_empty() && self.dogs.is_empty() {
      return vec![-1, -1];
    }
    let take_cat = self.dogs.is_empty()
      || (!self.cats.is_empty() && self.cats.front().unwrap().1 < self.dogs.front().unwrap().1);
    if take_cat {
      let (num, _) = self.cats.pop_front().unwrap();
      vec![num, 0]
    } else {
      let (num, _) = self.dogs.pop_front().unwrap();
      vec![num, 1]
    }
  }

  pub fn dequeue_dog(&mut self) -> Vec<i32> {
    if self.dogs.is_empty() {
      return vec![-1, -1];
    }
    let (num, _) = self.dogs.pop_front().unwrap();
    vec![num, 1]
  }

  pub fn dequeue_cat(&mut self) -> Vec<i32> {
    if self.cats.is_empty() {
      return vec![-1, -1];
    }
    let (num, _) = self.cats.pop_front().unwrap();
    vec![num, 0]
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  println!("Input:  [\"AnimalShelf\", \"enqueue\", \"enqueue\", \"enqueue\", \"dequeueDog\", \"dequeueCat\", \"dequeueAny\"]");
  let mut obj = AnimalShelf::new();
  obj.enqueue(vec![0, 0]);
  obj.enqueue(vec![1, 0]);
  obj.enqueue(vec![2, 1]);
  let r1 = obj.dequeue_dog();
  let r2 = obj.dequeue_cat();
  let r3 = obj.dequeue_any();
  println!(
    "Output: [null, null, null, null, {:?}, {:?}, {:?}]",
    r1, r2, r3
  );
}
