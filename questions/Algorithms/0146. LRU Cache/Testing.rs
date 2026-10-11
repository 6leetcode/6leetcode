// ------------------------------- solution begin -------------------------------
use std::collections::HashMap;
use std::collections::VecDeque;

pub struct LRUCache {
  capacity: usize,
  map: HashMap<i32, i32>,
  order: VecDeque<i32>,
}

impl LRUCache {
  pub fn new(capacity: i32) -> Self {
    LRUCache {
      capacity: capacity as usize,
      map: HashMap::new(),
      order: VecDeque::new(),
    }
  }

  pub fn get(&mut self, key: i32) -> i32 {
    if let Some(&value) = self.map.get(&key) {
      if let Some(pos) = self.order.iter().position(|&k| k == key) {
        self.order.remove(pos);
      }
      self.order.push_back(key);
      value
    } else {
      -1
    }
  }

  pub fn put(&mut self, key: i32, value: i32) {
    if self.map.contains_key(&key) {
      self.map.insert(key, value);
      if let Some(pos) = self.order.iter().position(|&k| k == key) {
        self.order.remove(pos);
      }
      self.order.push_back(key);
      return;
    }

    if self.map.len() >= self.capacity {
      if let Some(old) = self.order.pop_front() {
        self.map.remove(&old);
      }
    }
    self.map.insert(key, value);
    self.order.push_back(key);
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let mut cache = LRUCache::new(2);
  cache.put(1, 1);
  cache.put(2, 2);
  let a1 = cache.get(1);
  cache.put(3, 3);
  let a2 = cache.get(2);
  cache.put(4, 4);
  let a3 = cache.get(1);
  let a4 = cache.get(3);
  let a5 = cache.get(4);
  println!("Input:  [\"LRUCache\",\"put\",\"put\",\"get\",\"put\",\"get\",\"put\",\"get\",\"get\",\"get\"] [[2],[1,1],[2,2],[1],[3,3],[2],[4,4],[1],[3],[4]]");
  println!(
    "Output: [null, null, null, {}, null, {}, null, {}, {}, {}]",
    a1, a2, a3, a4, a5
  );

  let mut cache2 = LRUCache::new(1);
  cache2.put(2, 1);
  let b1 = cache2.get(2);
  cache2.put(3, 2);
  let b2 = cache2.get(2);
  let b3 = cache2.get(3);
  println!("Input:  [\"LRUCache\",\"put\",\"get\",\"put\",\"get\",\"get\"] [[1],[2,1],[2],[3,2],[2],[3]]");
  println!("Output: [null, null, {}, null, {}, {}]", b1, b2, b3);
}
