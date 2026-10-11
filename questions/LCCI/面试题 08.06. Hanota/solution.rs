pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn hanota(a: &mut Vec<i32>, b: &mut Vec<i32>, c: &mut Vec<i32>) {
    fn hanoi(src: &mut Vec<i32>, aux: &mut Vec<i32>, dst: &mut Vec<i32>, n: usize) {
      if n == 0 {
        return;
      }
      hanoi(src, dst, aux, n - 1);
      let v = src.pop().unwrap();
      dst.push(v);
      hanoi(aux, src, dst, n - 1);
    }
    let n = a.len();
    hanoi(a, b, c, n);
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let mut a = vec![2, 1, 0];
  let mut b = vec![];
  let mut c = vec![];
  println!("Input:  A = [2, 1, 0], B = [], C = []");
  Solution::hanota(&mut a, &mut b, &mut c);
  println!("Output: C = {:?}", c);
}
