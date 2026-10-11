pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn trap(height: Vec<i32>) -> i32 {
    let (mut l, mut r) = (0usize, height.len() - 1);
    let (mut lmax, mut rmax, mut res) = (0, 0, 0);
    while l < r {
      if height[l] < height[r] {
        if height[l] >= lmax {
          lmax = height[l];
        } else {
          res += lmax - height[l];
        }
        l += 1;
      } else {
        if height[r] >= rmax {
          rmax = height[r];
        } else {
          res += rmax - height[r];
        }
        r -= 1;
      }
    }
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let height = vec![0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1];
  println!("Input:  {:?}", height);
  println!("Output: {}", Solution::trap(height));
}
