pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn add_binary(a: String, b: String) -> String {
    let (ab, bb) = (a.as_bytes(), b.as_bytes());
    let mut i = ab.len() as i32 - 1;
    let mut j = bb.len() as i32 - 1;
    let mut carry = 0;
    let mut res: Vec<u8> = vec![];
    while i >= 0 || j >= 0 || carry > 0 {
      let mut sum = carry;
      if i >= 0 {
        sum += (ab[i as usize] - b'0') as i32;
        i -= 1;
      }
      if j >= 0 {
        sum += (bb[j as usize] - b'0') as i32;
        j -= 1;
      }
      res.push((sum % 2) as u8 + b'0');
      carry = sum / 2;
    }
    res.reverse();
    String::from_utf8(res).unwrap()
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input1 = String::from("1011");
  let input2 = String::from("111");
  println!("Input:  {} {}", input1, input2);
  println!("Output: {}", Solution::add_binary(input1, input2));
}
