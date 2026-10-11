pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn merge(nums1: &mut Vec<i32>, m: i32, nums2: &mut Vec<i32>, n: i32) {
    let (mut i, mut j, mut k) = (m - 1, n - 1, m + n - 1);
    while j >= 0 {
      if i >= 0 && nums1[i as usize] > nums2[j as usize] {
        nums1[k as usize] = nums1[i as usize];
        i -= 1;
      } else {
        nums1[k as usize] = nums2[j as usize];
        j -= 1;
      }
      k -= 1;
    }
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let mut input1 = vec![1, 2, 3, 0, 0, 0];
  let mut input2 = vec![2, 5, 6];
  let (m, n) = (3, 3);
  println!("Input:  {:?} {} {:?} {}", input1, m, input2, n);
  Solution::merge(&mut input1, m, &mut input2, n);
  println!("Output: {:?}", input1);
}
