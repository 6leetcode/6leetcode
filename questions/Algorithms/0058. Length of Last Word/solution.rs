pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn length_of_last_word(s: String) -> i32 {
    let bytes = s.as_bytes();
    let mut end = bytes.len() as i32 - 1;
    while end >= 0 && bytes[end as usize] == b' ' {
      end -= 1;
    }
    let mut start = end;
    while start >= 0 && bytes[start as usize] != b' ' {
      start -= 1;
    }
    end - start
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = String::from("Hello World");
  println!("Input:  {}", input);
  println!("Output: {}", Solution::length_of_last_word(input));
}
