pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn count_and_say(n: i32) -> String {
    let mut cur = String::from("1");
    for _ in 1..n {
      let bytes = cur.as_bytes();
      let mut next = String::new();
      let mut i = 0;
      while i < bytes.len() {
        let mut j = i;
        while j < bytes.len() && bytes[j] == bytes[i] {
          j += 1;
        }
        next.push_str(&(j - i).to_string());
        next.push(bytes[i] as char);
        i = j;
      }
      cur = next;
    }
    cur
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = 4;
  println!("Input:  {}", input);
  println!("Output: {}", Solution::count_and_say(input));
}
