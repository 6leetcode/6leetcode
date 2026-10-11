pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn is_palindrome(s: String) -> bool {
    let chars: Vec<char> = s
      .chars()
      .filter(|c| c.is_alphanumeric())
      .map(|c| c.to_ascii_lowercase())
      .collect();

    let mut left = 0;
    let mut right = chars.len() as i32 - 1;

    while left < right {
      if chars[left as usize] != chars[right as usize] {
        return false;
      }
      left += 1;
      right -= 1;
    }

    true
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let inputs = vec![
    "A man, a plan, a canal: Panama",
    "race a car",
    " ",
    "0P",
  ];

  for s in inputs {
    println!("Input:  {:?}", s);
    println!("Output: {}", Solution::is_palindrome(s.to_string()));
  }
}
