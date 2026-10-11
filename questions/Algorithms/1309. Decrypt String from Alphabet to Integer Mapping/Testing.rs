pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn freq_alphabets(s: String) -> String {
    let b = s.as_bytes();
    let n = b.len();
    let mut res = String::new();
    let mut i = 0;
    while i < n {
      if i + 2 < n && b[i + 2] == b'#' {
        let num = (b[i] - b'0') as i32 * 10 + (b[i + 1] - b'0') as i32;
        res.push((b'a' + num as u8 - 1) as char);
        i += 3;
      } else {
        res.push((b'a' + (b[i] - b'0') - 1) as char);
        i += 1;
      }
    }
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = String::from("12345678910#11#12#13#14#15#16#17#18#19#20#21#22#23#24#25#26#");
  println!("Input:  {}", input);
  println!("Output: {}", Solution::freq_alphabets(input));
}
