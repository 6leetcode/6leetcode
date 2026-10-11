pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn find_median_sorted_arrays(nums1: Vec<i32>, nums2: Vec<i32>) -> f64 {
    let mut merged = nums1;
    merged.extend(nums2);
    merged.sort();

    let length = merged.len();
    if length % 2 == 0 {
      (merged[length / 2 - 1] + merged[length / 2]) as f64 / 2.0
    } else {
      merged[length / 2] as f64
    }
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input1 = vec![1, 3];
  let input2 = vec![2];
  println!("Input:  {:?}, {:?}", input1, input2);
  println!("Output: {}", Solution::find_median_sorted_arrays(input1, input2));
}
