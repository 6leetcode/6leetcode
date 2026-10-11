pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn climb_stairs(n: i32) -> i32 {
    let mut prev: i32 = 0;
    let mut cur: i32 = 1;
    for _i in 1..(n + 1) {
      let tmp: i32 = cur;
      cur += prev;
      prev = tmp;
    }
    cur
  }
}

// ------------------------------- solution end ---------------------------------

fn main() {
  let input: i32 = 3;
  println!("Input:  {}", input);
  let output = Solution::climb_stairs(input);
  println!("Output: {}", output);
}
