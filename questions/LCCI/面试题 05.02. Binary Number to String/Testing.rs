pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn print_bin(mut num: f64) -> String {
    let mut res = String::from("0.");
    while num > 0.0 && res.len() < 32 {
      num *= 2.0;
      if num >= 1.0 {
        res.push('1');
        num -= 1.0;
      } else {
        res.push('0');
      }
    }
    if num > 0.0 {
      String::from("ERROR")
    } else {
      res
    }
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = 0.625;
  println!("Input:  {}", input);
  println!("Output: {}", Solution::print_bin(input));
}
