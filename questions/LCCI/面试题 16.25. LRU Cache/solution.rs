use std::collections::{HashMap, VecDeque};

pub struct LRUCache {
  capacity: usize,
  keys: HashMap<i32, i32>,
  order: VecDeque<i32>,
}

// ------------------------------- solution begin -------------------------------
impl LRUCache {
  pub fn new(capacity: i32) -> Self {
    LRUCache {
      capacity: capacity as usize,
      keys: HashMap::new(),
      order: VecDeque::new(),
    }
  }

  pub fn get(&mut self, key: i32) -> i32 {
    if let Some(&v) = self.keys.get(&key) {
      self.touch(key);
      v
    } else {
      -1
    }
  }

  pub fn put(&mut self, key: i32, value: i32) {
    if self.keys.contains_key(&key) {
      self.keys.insert(key, value);
      self.touch(key);
      return;
    }
    if self.keys.len() == self.capacity {
      if let Some(evict) = self.order.pop_back() {
        self.keys.remove(&evict);
      }
    }
    self.keys.insert(key, value);
    self.order.push_front(key);
  }

  fn touch(&mut self, key: i32) {
    self.order.retain(|&k| k != key);
    self.order.push_front(key);
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  println!("Input:  LRUCache(2), put(1,1), put(2,2), get(1), put(3,3), get(2), put(4,4), get(1), get(3), get(4)");
  let mut cache = LRUCache::new(2);
  cache.put(1, 1);
  cache.put(2, 2);
  let a = cache.get(1);
  cache.put(3, 3);
  let b = cache.get(2);
  cache.put(4, 4);
  let c = cache.get(1);
  let d = cache.get(3);
  let e = cache.get(4);
  println!("Output: [{}, {}, {}, {}, {}]", a, b, c, d, e);
}
