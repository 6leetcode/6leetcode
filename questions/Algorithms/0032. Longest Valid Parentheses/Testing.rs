pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn longest_valid_parentheses(s: String) -> i32 {
    let mut stack: Vec<i32> = vec![-1];
    let mut best = 0;
    for (i, c) in s.chars().enumerate() {
      if c == '(' {
        stack.push(i as i32);
      } else {
        stack.pop();
        if stack.is_empty() {
          stack.push(i as i32);
        } else {
          best = best.max(i as i32 - stack[stack.len() - 1]);
        }
      }
    }
    best
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = String::from("(()");
  println!("Input:  {}", input);
  println!("Output: {}", Solution::longest_valid_parentheses(input));
}
