pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn find_closed_numbers(num: i32) -> Vec<i32> {
    fn next_bigger(n: i32) -> i32 {
      let (mut c, mut c0, mut c1) = (n, 0, 0);
      while c != 0 && c & 1 == 0 {
        c0 += 1;
        c >>= 1;
      }
      while c & 1 == 1 {
        c1 += 1;
        c >>= 1;
      }
      if c0 + c1 >= 31 {
        return -1;
      }
      let p = c0 + c1;
      let mut n = n;
      n |= 1 << p;
      n &= !((1 << p) - 1);
      n |= (1 << (c1 - 1)) - 1;
      n
    }
    fn next_smaller(n: i32) -> i32 {
      let (mut c, mut c0, mut c1) = (n, 0, 0);
      while c & 1 == 1 {
        c1 += 1;
        c >>= 1;
      }
      if c == 0 {
        return -1;
      }
      while c != 0 && c & 1 == 0 {
        c0 += 1;
        c >>= 1;
      }
      let p = c0 + c1;
      let mut n = n;
      n &= !((1 << (p + 1)) - 1);
      n |= ((1 << (c1 + 1)) - 1) << (c0 - 1);
      n
    }
    vec![next_bigger(num), next_smaller(num)]
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = 2;
  println!("Input:  {}", input);
  println!("Output: {:?}", Solution::find_closed_numbers(input));
}
