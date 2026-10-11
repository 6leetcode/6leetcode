pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn multiply(num1: String, num2: String) -> String {
    if num1 == "0" || num2 == "0" {
      return "0".to_string();
    }
    let a = num1.as_bytes();
    let b = num2.as_bytes();
    let (m, n) = (a.len(), b.len());
    let mut res = vec![0i32; m + n];
    for i in (0..m).rev() {
      for j in (0..n).rev() {
        let mul = (a[i] - b'0') as i32 * (b[j] - b'0') as i32;
        let p2 = i + j + 1;
        let total = mul + res[p2];
        res[p2] = total % 10;
        res[i + j] += total / 10;
      }
    }
    let out: String = res
      .iter()
      .map(|d| (d + b'0' as i32) as u8 as char)
      .collect::<String>();
    out.trim_start_matches('0').to_string()
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input1 = String::from("123");
  let input2 = String::from("456");
  println!("Input:  {} {}", input1, input2);
  println!("Output: {}", Solution::multiply(input1, input2));
}
