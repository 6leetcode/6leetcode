pub struct Solution {}

use std::cell::RefCell;
use std::collections::HashMap;
use std::rc::Rc;

pub struct Node {
  pub val: i32,
  pub next: Option<Rc<RefCell<Node>>>,
  pub random: Option<Rc<RefCell<Node>>>,
}

impl Node {
  fn new(val: i32) -> Self {
    Node {
      val,
      next: None,
      random: None,
    }
  }
}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn copy_random_list(head: Option<Rc<RefCell<Node>>>) -> Option<Rc<RefCell<Node>>> {
    let head = head?;
    let mut mapping: HashMap<usize, Rc<RefCell<Node>>> = HashMap::new();

    let mut cur = Some(head.clone());
    while let Some(node) = cur {
      let key = Rc::as_ptr(&node) as usize;
      mapping.insert(key, Rc::new(RefCell::new(Node::new(node.borrow().val))));
      cur = node.borrow().next.clone();
    }

    let mut cur = Some(head.clone());
    while let Some(node) = cur {
      let key = Rc::as_ptr(&node) as usize;
      let (next_key, random_key) = {
        let node_ref = node.borrow();
        (
          node_ref.next.as_ref().map(|n| Rc::as_ptr(n) as usize),
          node_ref.random.as_ref().map(|n| Rc::as_ptr(n) as usize),
        )
      };
      let copy = mapping.get(&key).unwrap().clone();
      copy.borrow_mut().next = next_key.and_then(|k| mapping.get(&k).cloned());
      copy.borrow_mut().random = random_key.and_then(|k| mapping.get(&k).cloned());
      cur = node.borrow().next.clone();
    }

    mapping.get(&(Rc::as_ptr(&head) as usize)).cloned()
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let vals = vec![7, 13, 11, 10, 1];
  let randoms: Vec<Option<usize>> = vec![None, Some(0), Some(4), Some(2), Some(0)];

  let nodes: Vec<Rc<RefCell<Node>>> = vals
    .iter()
    .map(|&v| Rc::new(RefCell::new(Node::new(v))))
    .collect();
  for i in 0..nodes.len() {
    if i + 1 < nodes.len() {
      nodes[i].borrow_mut().next = Some(nodes[i + 1].clone());
    }
    if let Some(r) = randoms[i] {
      nodes[i].borrow_mut().random = Some(nodes[r].clone());
    }
  }

  println!("Input:  [[7, null], [13, 0], [11, 4], [10, 2], [1, 0]]");
  let clone = Solution::copy_random_list(Some(nodes[0].clone())).unwrap();

  let mut list: Vec<Rc<RefCell<Node>>> = Vec::new();
  let mut cur = Some(clone.clone());
  while let Some(node) = cur {
    list.push(node.clone());
    cur = node.borrow().next.clone();
  }

  let parts: Vec<String> = list
    .iter()
    .map(|node| {
      let node_ref = node.borrow();
      let index = node_ref
        .random
        .as_ref()
        .and_then(|r| list.iter().position(|x| Rc::ptr_eq(x, r)));
      let random = match index {
        Some(i) => i.to_string(),
        None => "null".to_string(),
      };
      format!("[{}, {}]", node_ref.val, random)
    })
    .collect();

  println!("Output: [{}]", parts.join(", "));
}
