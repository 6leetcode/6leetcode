pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn longest_palindrome(s: String) -> String {
    let chars: Vec<char> = s.chars().collect();
    if chars.len() < 2 {
      return s;
    }
    let (mut start, mut end) = (0usize, 0usize);

    let expand = |mut l: i32, mut r: i32| -> i32 {
      while l >= 0 && (r as usize) < chars.len() && chars[l as usize] == chars[r as usize] {
        l -= 1;
        r += 1;
      }
      r - l - 1
    };

    for i in 0..chars.len() {
      let len = expand(i as i32, i as i32).max(expand(i as i32, i as i32 + 1));
      if len as usize > end - start {
        start = (i as i32 - (len - 1) / 2) as usize;
        end = (i as i32 + len / 2) as usize;
      }
    }
    chars[start..=end].iter().collect()
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = String::from("babad");
  println!("Input:  {}", input);
  println!("Output: {}", Solution::longest_palindrome(input));
}
