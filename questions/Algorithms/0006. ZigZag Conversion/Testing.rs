pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn convert(s: String, num_rows: i32) -> String {
    let num_rows = num_rows as usize;
    if num_rows == 1 {
      return s;
    }
    let chars: Vec<char> = s.chars().collect();
    let n = chars.len();
    let cycle = 2 * num_rows - 2;
    let mut ret = String::new();

    for i in 0..num_rows {
      let mut j = 0usize;
      while i + j < n {
        ret.push(chars[i + j]);
        if i != 0 && i != num_rows - 1 && j + cycle - i < n {
          ret.push(chars[j + cycle - i]);
        }
        j += cycle;
      }
    }

    ret
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = String::from("PAYPALISHIRING");
  println!("Input:  {} {}", input, 3);
  println!("Output: {}", Solution::convert(input, 3));
}
