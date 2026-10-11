pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn parse_bool_expr(expression: String) -> bool {
    let mut stack: Vec<char> = vec![];
    for c in expression.chars() {
      match c {
        't' | 'f' | '(' | '!' | '&' | '|' => stack.push(c),
        ')' => {
          let mut has_true = false;
          let mut has_false = false;
          while *stack.last().unwrap() != '(' {
            let x = stack.pop().unwrap();
            if x == 't' {
              has_true = true;
            } else {
              has_false = true;
            }
          }
          stack.pop();
          let op = stack.pop().unwrap();
          let res = match op {
            '!' => {
              if has_false {
                't'
              } else {
                'f'
              }
            }
            '&' => {
              if has_false {
                'f'
              } else {
                't'
              }
            }
            _ => {
              if has_true {
                't'
              } else {
                'f'
              }
            }
          };
          stack.push(res);
        }
        _ => {}
      }
    }
    stack[0] == 't'
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = String::from("|(&(t,f,t),!(t))");
  println!("Input:  {}", input);
  println!("Output: {}", Solution::parse_bool_expr(input));
}
