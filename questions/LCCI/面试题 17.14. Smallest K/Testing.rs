pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn smallest_k(mut arr: Vec<i32>, k: i32) -> Vec<i32> {
    arr.sort();
    arr[..k as usize].to_vec()
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let arr = vec![1, 3, 5, 7, 2, 4, 6, 8];
  let k = 4;
  println!("Input:  {:?}, k = {}", arr, k);
  println!("Output: {:?}", Solution::smallest_k(arr, k));
}
