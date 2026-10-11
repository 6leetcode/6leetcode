pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn merge(mut intervals: Vec<Vec<i32>>) -> Vec<Vec<i32>> {
    intervals.sort_by_key(|v| v[0]);
    let mut res: Vec<Vec<i32>> = vec![];
    for iv in intervals {
      match res.last_mut() {
        Some(last) if last[1] >= iv[0] => {
          last[1] = last[1].max(iv[1]);
        }
        _ => res.push(vec![iv[0], iv[1]]),
      }
    }
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = vec![vec![1, 4], vec![4, 5]];
  println!("Input:  {:?}", input);
  println!("Output: {:?}", Solution::merge(input));
}
