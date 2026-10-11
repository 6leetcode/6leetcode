pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn search(arr: Vec<i32>, target: i32) -> i32 {
    let (mut lo, mut hi, mut res) = (0i32, arr.len() as i32 - 1, -1);
    while lo <= hi {
      let mid = lo + (hi - lo) / 2;
      let (l, m, h) = (arr[lo as usize], arr[mid as usize], arr[hi as usize]);
      if m == target {
        res = mid;
        hi = mid - 1;
      } else if m > l {
        if target >= l && target < m {
          hi = mid - 1;
        } else {
          lo = mid + 1;
        }
      } else if m < l {
        if target > m && target <= h {
          lo = mid + 1;
        } else {
          hi = mid - 1;
        }
      } else if l != target {
        lo += 1;
      } else {
        res = mid;
        hi = mid - 1;
      }
    }
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let arr = vec![15, 16, 19, 20, 25, 1, 3, 4, 5, 7, 10, 14];
  let target = 5;
  println!("Input:  {:?}, target = {}", arr, target);
  println!("Output: {}", Solution::search(arr, target));
}
