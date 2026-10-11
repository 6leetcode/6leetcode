pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn calculate_time(keyboard: String, word: String) -> i32 {
    let kb = keyboard.as_bytes();
    let mut pos = [0usize; 26];
    for i in 0..26 {
      pos[(kb[i] - b'a') as usize] = i;
    }
    let mut ans = 0i32;
    let mut cur = 0i32;
    for &c in word.as_bytes() {
      let next = pos[(c - b'a') as usize] as i32;
      ans += (cur - next).abs();
      cur = next;
    }
    ans
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input1 = String::from("abcdefghijklmnopqrstuvwxyz");
  let input2 = String::from("cba");
  println!("Input:  {} {}", input1, input2);
  println!("Output: {}", Solution::calculate_time(input1, input2));
}
