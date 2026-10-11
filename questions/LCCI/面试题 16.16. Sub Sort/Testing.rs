pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn sub_sort(array: Vec<i32>) -> Vec<i32> {
    let n = array.len();
    let (mut m, mut nn) = (-1i32, -1i32);
    let mut mx = array[0];
    for i in 1..n {
      if array[i] < mx {
        nn = i as i32;
      } else {
        mx = array[i];
      }
    }
    let mut mn = array[n - 1];
    for i in (0..n - 1).rev() {
      if array[i] > mn {
        m = i as i32;
      } else {
        mn = array[i];
      }
    }
    vec![m, nn]
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let array = vec![1, 2, 4, 7, 10, 11, 7, 12, 6, 7, 16, 18, 19];
  println!("Input:  {:?}", array);
  println!("Output: {:?}", Solution::sub_sort(array));
}
