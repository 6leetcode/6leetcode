pub struct Solution {}

// ------------------------------- solution begin -------------------------------
use std::collections::HashMap;

fn gcd(a: i32, b: i32) -> i32 {
  let mut a = a.abs();
  let mut b = b.abs();
  while b != 0 {
    let t = a % b;
    a = b;
    b = t;
  }
  a
}

impl Solution {
  pub fn max_points(points: Vec<Vec<i32>>) -> i32 {
    let n = points.len();
    if n < 3 {
      return n as i32;
    }

    let mut best = 1;
    for i in 0..n {
      let mut cnt: HashMap<(i32, i32), i32> = HashMap::new();
      for j in (i + 1)..n {
        let mut dy = points[j][1] - points[i][1];
        let mut dx = points[j][0] - points[i][0];
        let mut g = gcd(dy, dx);
        if g == 0 {
          g = 1;
        }
        dy /= g;
        dx /= g;
        if dx < 0 || (dx == 0 && dy < 0) {
          dy = -dy;
          dx = -dx;
        }
        let c = cnt.entry((dy, dx)).or_insert(0);
        *c += 1;
        if *c + 1 > best {
          best = *c + 1;
        }
      }
    }
    best
  }
}
// ------------------------------- solution end ---------------------------------

fn run(points: Vec<Vec<i32>>) {
  println!("Input:  {:?}", points);
  println!("Output: {}", Solution::max_points(points));
}

fn main() {
  run(vec![vec![1, 1], vec![2, 2], vec![3, 3]]);
  run(vec![vec![1, 1], vec![3, 2], vec![5, 3], vec![4, 1], vec![2, 3], vec![1, 4]]);
}
