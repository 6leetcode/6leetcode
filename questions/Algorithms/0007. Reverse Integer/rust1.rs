pub struct Solution {}

impl Solution {
  pub fn reverse(x: i32) -> i32 {
    let mut ret = 0i32;
    let mut x_clone = x;
    while x_clone != 0 {
      let i = x_clone % 10;
      let x1 = ret.overflowing_mul(10);
      if x1.1 == true {
        return 0;
      }
      let x2 = x1.0.overflowing_add(i);
      if x2.1 == true {
        return 0;
      }
      ret = x2.0;
      x_clone = x_clone / 10;
    }

    ret
  }
}

fn main() {
  let input: i32 = 123;
  let output = Solution::reverse(input);
  println!("Input:  {}", input);
  println!("Output: {}", output);
}
