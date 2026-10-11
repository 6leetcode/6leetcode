pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn roman_to_int(s: String) -> i32 {
    fn value(c: char) -> i32 {
      match c {
        'I' => 1,
        'V' => 5,
        'X' => 10,
        'L' => 50,
        'C' => 100,
        'D' => 500,
        'M' => 1000,
        _ => 0,
      }
    }

    let chars: Vec<char> = s.chars().collect();
    let mut result = 0;
    for i in 0..chars.len() {
      let curr = value(chars[i]);
      if i + 1 < chars.len() && curr < value(chars[i + 1]) {
        result -= curr;
      } else {
        result += curr;
      }
    }
    result
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = String::from("MCMXCIV");
  println!("Input:  {}", input);
  println!("Output: {}", Solution::roman_to_int(input));
}
