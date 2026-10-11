pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn is_match(s: String, p: String) -> bool {
    let s: Vec<char> = s.chars().collect();
    let p: Vec<char> = p.chars().collect();
    Solution::helper(&s, &p)
  }

  fn helper(s: &[char], p: &[char]) -> bool {
    if p.is_empty() {
      return s.is_empty();
    }

    let first_match = !s.is_empty() && (s[0] == p[0] || p[0] == '.');

    if p.len() >= 2 && p[1] == '*' {
      return Solution::helper(s, &p[2..]) || (first_match && Solution::helper(&s[1..], p));
    }
    first_match && Solution::helper(&s[1..], &p[1..])
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input1 = String::from("aab");
  let input2 = String::from("c*a*b");
  println!("Input:  {} {}", input1, input2);
  println!("Output: {}", Solution::is_match(input1, input2));
}
