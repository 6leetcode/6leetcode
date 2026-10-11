pub struct Solution {}

use std::cell::RefCell;
use std::collections::HashMap;
use std::rc::Rc;

pub struct Node {
  pub val: i32,
  pub neighbors: Vec<Rc<RefCell<Node>>>,
}

impl Node {
  fn new(val: i32) -> Self {
    Node {
      val,
      neighbors: Vec::new(),
    }
  }
}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn clone_graph(node: Option<Rc<RefCell<Node>>>) -> Option<Rc<RefCell<Node>>> {
    fn dfs(n: &Rc<RefCell<Node>>, visited: &mut HashMap<usize, Rc<RefCell<Node>>>) -> Rc<RefCell<Node>> {
      let key = Rc::as_ptr(n) as usize;
      if let Some(copy) = visited.get(&key) {
        return copy.clone();
      }
      let copy = Rc::new(RefCell::new(Node::new(n.borrow().val)));
      visited.insert(key, copy.clone());
      let neighbors = n.borrow().neighbors.clone();
      for neighbor in neighbors {
        let cloned = dfs(&neighbor, visited);
        copy.borrow_mut().neighbors.push(cloned);
      }
      copy
    }

    node.map(|n| dfs(&n, &mut HashMap::new()))
  }
}
// ------------------------------- solution end ---------------------------------

fn collect(node: &Rc<RefCell<Node>>, by_val: &mut HashMap<i32, Rc<RefCell<Node>>>) {
  let val = node.borrow().val;
  if by_val.contains_key(&val) {
    return;
  }
  by_val.insert(val, node.clone());
  let neighbors = node.borrow().neighbors.clone();
  for neighbor in neighbors {
    collect(&neighbor, by_val);
  }
}

fn main() {
  let n1 = Rc::new(RefCell::new(Node::new(1)));
  let n2 = Rc::new(RefCell::new(Node::new(2)));
  let n3 = Rc::new(RefCell::new(Node::new(3)));
  let n4 = Rc::new(RefCell::new(Node::new(4)));
  n1.borrow_mut().neighbors = vec![n2.clone(), n4.clone()];
  n2.borrow_mut().neighbors = vec![n1.clone(), n3.clone()];
  n3.borrow_mut().neighbors = vec![n2.clone(), n4.clone()];
  n4.borrow_mut().neighbors = vec![n1.clone(), n3.clone()];

  println!("Input:  [[2, 4], [1, 3], [2, 4], [1, 3]]");
  let clone = Solution::clone_graph(Some(n1.clone())).unwrap();
  let mut by_val: HashMap<i32, Rc<RefCell<Node>>> = HashMap::new();
  collect(&clone, &mut by_val);
  let max = by_val.keys().cloned().max().unwrap_or(0);
  let mut parts: Vec<String> = Vec::new();
  for v in 1..=max {
    let node = by_val.get(&v).unwrap();
    let inner: Vec<String> = node
      .borrow()
      .neighbors
      .iter()
      .map(|x| x.borrow().val.to_string())
      .collect();
    parts.push(format!("[{}]", inner.join(", ")));
  }
  println!("Output: [{}]", parts.join(", "));
}
