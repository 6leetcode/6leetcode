pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn cut_squares(square1: Vec<i32>, square2: Vec<i32>) -> Vec<f64> {
    let c1x = square1[0] as f64 + square1[2] as f64 / 2.0;
    let c1y = square1[1] as f64 + square1[2] as f64 / 2.0;
    let c2x = square2[0] as f64 + square2[2] as f64 / 2.0;
    let c2y = square2[1] as f64 + square2[2] as f64 / 2.0;
    if (c1x - c2x).abs() < 1e-12 {
      let bottom = (square1[1] as f64).min(square2[1] as f64);
      let top = (square1[1] + square1[2]).max(square2[1] + square2[2]) as f64;
      return vec![c1x, bottom, c1x, top];
    }
    let k = (c2y - c1y) / (c2x - c1x);
    let b = c1y - k * c1x;
    let mut pts: Vec<(f64, f64)> = vec![];
    for sq in [&square1, &square2] {
      let x0 = sq[0] as f64;
      let y0 = sq[1] as f64;
      let side = sq[2] as f64;
      for x in [x0, x0 + side] {
        let y = k * x + b;
        if y >= y0 - 1e-6 && y <= y0 + side + 1e-6 {
          pts.push((x, y));
        }
      }
      if k.abs() > 1e-12 {
        for y in [y0, y0 + side] {
          let x = (y - b) / k;
          if x >= x0 - 1e-6 && x <= x0 + side + 1e-6 {
            pts.push((x, y));
          }
        }
      }
    }
    pts.sort_by(|a, b| a.partial_cmp(b).unwrap());
    vec![pts[0].0, pts[0].1, pts[pts.len() - 1].0, pts[pts.len() - 1].1]
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  println!("Input:  square1 = {{-1, -1, 2}}, square2 = {{0, -1, 2}}");
  println!("Output: {:?}", Solution::cut_squares(vec![-1, -1, 2], vec![0, -1, 2]));
}
