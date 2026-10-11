pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn intersection(start1: Vec<i32>, end1: Vec<i32>, start2: Vec<i32>, end2: Vec<i32>) -> Vec<f64> {
    let (x1, y1) = (start1[0] as f64, start1[1] as f64);
    let (x2, y2) = (end1[0] as f64, end1[1] as f64);
    let (x3, y3) = (start2[0] as f64, start2[1] as f64);
    let (x4, y4) = (end2[0] as f64, end2[1] as f64);
    let d = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);
    if d.abs() > 1e-12 {
      let t = ((x1 - x3) * (y3 - y4) - (y1 - y3) * (x3 - x4)) / d;
      let u = ((x1 - x3) * (y1 - y2) - (y1 - y3) * (x1 - x2)) / d;
      if t >= -1e-9 && t <= 1.0 + 1e-9 && u >= -1e-9 && u <= 1.0 + 1e-9 {
        return vec![x1 + t * (x2 - x1), y1 + t * (y2 - y1)];
      }
      return vec![];
    }
    fn on_segment(p: &[i32], a: &[i32], b: &[i32]) -> bool {
      let cross = (b[0] - a[0]) as f64 * (p[1] - a[1]) as f64
        - (b[1] - a[1]) as f64 * (p[0] - a[0]) as f64;
      if cross.abs() > 1e-9 {
        return false;
      }
      p[0] >= a[0].min(b[0])
        && p[0] <= a[0].max(b[0])
        && p[1] >= a[1].min(b[1])
        && p[1] <= a[1].max(b[1])
    }
    let mut candidates: Vec<Vec<i32>> = vec![];
    for p in [&start1, &end1] {
      if on_segment(p, &start2, &end2) {
        candidates.push(p.clone());
      }
    }
    for p in [&start2, &end2] {
      if on_segment(p, &start1, &end1) {
        candidates.push(p.clone());
      }
    }
    if candidates.is_empty() {
      return vec![];
    }
    candidates.sort();
    vec![candidates[0][0] as f64, candidates[0][1] as f64]
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  println!("Input:  line1 = {{0, 0}}, {{1, 0}}; line2 = {{1, 1}}, {{0, -1}}");
  let res = Solution::intersection(vec![0, 0], vec![1, 0], vec![1, 1], vec![0, -1]);
  println!("Output: {:?}", res);
}
