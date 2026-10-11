pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn insert(intervals: Vec<Vec<i32>>, new_interval: Vec<i32>) -> Vec<Vec<i32>> {
    let mut res = vec![];
    let mut i = 0;
    while i < intervals.len() && intervals[i][1] < new_interval[0] {
      res.push(intervals[i].clone());
      i += 1;
    }
    let (mut lo, mut hi) = (new_interval[0], new_interval[1]);
    while i < intervals.len() && intervals[i][0] <= hi {
      lo = lo.min(intervals[i][0]);
      hi = hi.max(intervals[i][1]);
      i += 1;
    }
    res.push(vec![lo, hi]);
    while i < intervals.len() {
      res.push(intervals[i].clone());
      i += 1;
    }
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input1 = vec![vec![1, 3], vec![6, 9]];
  let input2 = vec![2, 5];
  println!("Input:  {:?} {:?}", input1, input2);
  println!("Output: {:?}", Solution::insert(input1, input2));
}
