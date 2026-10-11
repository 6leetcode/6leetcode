pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn best_line(points: Vec<Vec<i32>>) -> Vec<i32> {
    let n = points.len();
    let (mut best_count, mut best_i, mut best_j) = (2, 0usize, 1usize);
    for i in 0..n {
      for j in i + 1..n {
        let dx = (points[j][0] - points[i][0]) as i64;
        let dy = (points[j][1] - points[i][1]) as i64;
        let mut count = 2;
        for k in 0..n {
          if k == i || k == j {
            continue;
          }
          let ddx = (points[k][0] - points[i][0]) as i64;
          let ddy = (points[k][1] - points[i][1]) as i64;
          if dx * ddy == dy * ddx {
            count += 1;
          }
        }
        if count > best_count {
          best_count = count;
          best_i = i;
          best_j = j;
        }
      }
    }
    vec![best_i as i32, best_j as i32]
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let points = vec![vec![0, 0], vec![1, 1], vec![1, 0], vec![2, 0]];
  println!("Input:  [[0,0],[1,1],[1,0],[2,0]]");
  println!("Output: {:?}", Solution::best_line(points));
}
