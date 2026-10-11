pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn draw_line(length: i32, w: i32, x1: i32, x2: i32, y: i32) -> Vec<i32> {
    let mut res = vec![0i32; length as usize];
    let per_row = w / 32;
    for x in x1..=x2 {
      let group = (y * per_row + x / 32) as usize;
      let bit = 31 - (x % 32);
      res[group] |= 1i32 << bit;
    }
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let (length, w, x1, x2, y) = (1, 32, 30, 31, 0);
  println!("Input:  length = 1, w = 32, x1 = 30, x2 = 31, y = 0");
  println!("Output: {:?}", Solution::draw_line(length, w, x1, x2, y));
}
