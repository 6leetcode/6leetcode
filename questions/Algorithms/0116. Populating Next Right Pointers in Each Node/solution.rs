pub struct Solution {}

pub struct Node {
  pub val: i32,
  pub left: Option<Box<Node>>,
  pub right: Option<Box<Node>>,
  pub next: *mut Node,
}

impl Node {
  fn new(val: i32) -> Self {
    Node {
      val,
      left: None,
      right: None,
      next: std::ptr::null_mut(),
    }
  }
}

// ------------------------------- solution begin -------------------------------
impl Solution {
  unsafe fn connect_ptr(node: *mut Node) {
    if node.is_null() {
      return;
    }
    let n = &mut *node;
    if n.left.is_none() {
      return;
    }
    let left = n.left.as_mut().unwrap().as_mut() as *mut Node;
    let right = n.right.as_mut().unwrap().as_mut() as *mut Node;
    (*left).next = right;
    let next_ptr = n.next;
    if !next_ptr.is_null() {
      let sibling = &mut *next_ptr;
      if let Some(sl) = sibling.left.as_mut() {
        (*right).next = sl.as_mut() as *mut Node;
      }
    }
    Self::connect_ptr(left);
    Self::connect_ptr(right);
  }

  pub fn connect(root: Option<Box<Node>>) -> Option<Box<Node>> {
    let mut root = root;
    if let Some(r) = root.as_mut() {
      unsafe {
        Solution::connect_ptr(r.as_mut() as *mut Node);
      }
    }
    root
  }
}
// ------------------------------- solution end ---------------------------------

fn first_of_next_level(cur: *mut Node) -> *mut Node {
  let mut cur = cur;
  unsafe {
    while !cur.is_null() {
      if (*cur).left.is_some() {
        return (*cur).left.as_mut().unwrap().as_mut() as *mut Node;
      }
      if (*cur).right.is_some() {
        return (*cur).right.as_mut().unwrap().as_mut() as *mut Node;
      }
      cur = (*cur).next;
    }
  }
  std::ptr::null_mut()
}

fn show(root: *mut Node) {
  let mut parts: Vec<String> = vec![];
  let mut first = true;
  let mut cur = root;
  unsafe {
    while !cur.is_null() {
      let mut node = cur;
      while !node.is_null() {
        if !first {
          parts.push(",".to_string());
        }
        parts.push((*node).val.to_string());
        first = false;
        node = (*node).next;
      }
      if !first {
        parts.push(",".to_string());
      }
      parts.push("#".to_string());
      first = false;
      cur = first_of_next_level(cur);
    }
  }
  println!("[{}]", parts.join(""));
}

fn main() {
  let mut root = Some(Box::new(Node::new(1)));
  {
    let r = root.as_mut().unwrap();
    r.left = Some(Box::new(Node::new(2)));
    r.right = Some(Box::new(Node::new(3)));
    r.left.as_mut().unwrap().left = Some(Box::new(Node::new(4)));
    r.left.as_mut().unwrap().right = Some(Box::new(Node::new(5)));
    r.right.as_mut().unwrap().left = Some(Box::new(Node::new(6)));
    r.right.as_mut().unwrap().right = Some(Box::new(Node::new(7)));
  }

  println!("Input:  [1, 2, 3, 4, 5, 6, 7]");
  let mut root = Solution::connect(root);
  print!("Output: ");
  let root_ptr = root
    .as_mut()
    .map(|r| r.as_mut() as *mut Node)
    .unwrap_or(std::ptr::null_mut());
  show(root_ptr);

  println!("Input:  []");
  print!("Output: ");
  show(std::ptr::null_mut());
}
