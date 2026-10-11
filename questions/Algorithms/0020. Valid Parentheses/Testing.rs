pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn is_valid(s: String) -> bool {
    let mut stack: Vec<char> = vec![];
    for c in s.chars() {
      match c {
        '(' | '[' | '{' => stack.push(c),
        ')' => {
          if stack.pop() != Some('(') {
            return false;
          }
        }
        ']' => {
          if stack.pop() != Some('[') {
            return false;
          }
        }
        '}' => {
          if stack.pop() != Some('{') {
            return false;
          }
        }
        _ => return false,
      }
    }
    stack.is_empty()
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = String::from("()[]{}");
  println!("Input:  {}", input);
  println!("Output: {}", Solution::is_valid(input));
}
