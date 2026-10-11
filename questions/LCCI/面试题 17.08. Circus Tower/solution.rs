pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn best_seq_at_index(height: Vec<i32>, weight: Vec<i32>) -> i32 {
    let mut people: Vec<(i32, i32)> = height.iter().cloned().zip(weight.iter().cloned()).collect();
    people.sort_by(|a, b| if a.0 != b.0 { a.0.cmp(&b.0) } else { b.1.cmp(&a.1) });
    let mut dp: Vec<i32> = vec![];
    for (_, w) in people {
      let idx = dp.partition_point(|&x| x < w);
      if idx == dp.len() {
        dp.push(w);
      } else {
        dp[idx] = w;
      }
    }
    dp.len() as i32
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let height = vec![65, 70, 56, 75, 60, 68];
  let weight = vec![100, 150, 90, 190, 95, 110];
  println!("Input:  height = [65,70,56,75,60,68], weight = [100,150,90,190,95,110]");
  println!("Output: {}", Solution::best_seq_at_index(height, weight));
}
