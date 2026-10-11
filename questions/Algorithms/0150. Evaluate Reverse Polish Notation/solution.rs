pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn eval_rpn(tokens: Vec<String>) -> i32 {
    let mut stack: Vec<i32> = Vec::new();
    for t in tokens {
      match t.as_str() {
        "+" | "-" | "*" | "/" => {
          let b = stack.pop().unwrap();
          let a = stack.pop().unwrap();
          let r = match t.as_str() {
            "+" => a + b,
            "-" => a - b,
            "*" => a * b,
            _ => a / b,
          };
          stack.push(r);
        }
        _ => stack.push(t.parse::<i32>().unwrap()),
      }
    }
    stack.pop().unwrap()
  }
}
// ------------------------------- solution end ---------------------------------

fn run(tokens: Vec<String>) {
  println!("Input:  {:?}", tokens);
  println!("Output: {}", Solution::eval_rpn(tokens));
}

fn main() {
  run(vec!["2".to_string(), "1".to_string(), "+".to_string(), "3".to_string(), "*".to_string()]);
  run(vec!["4".to_string(), "13".to_string(), "5".to_string(), "/".to_string(), "+".to_string()]);
  run(
    ["10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"]
      .iter()
      .map(|s| s.to_string())
      .collect(),
  );
}
