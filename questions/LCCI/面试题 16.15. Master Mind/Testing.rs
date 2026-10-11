pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn master_mind(solution: String, guess: String) -> Vec<i32> {
    let s = solution.as_bytes();
    let g = guess.as_bytes();
    let idx = |c: u8| -> usize {
      match c {
        b'R' => 0,
        b'Y' => 1,
        b'G' => 2,
        _ => 3,
      }
    };
    let mut hits = 0;
    let mut s_count = [0i32; 4];
    let mut g_count = [0i32; 4];
    for i in 0..s.len() {
      if s[i] == g[i] {
        hits += 1;
      } else {
        s_count[idx(s[i])] += 1;
        g_count[idx(g[i])] += 1;
      }
    }
    let pseudo: i32 = (0..4).map(|i| s_count[i].min(g_count[i])).sum();
    vec![hits, pseudo]
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let (solution, guess) = (String::from("RGBY"), String::from("GGRR"));
  println!("Input:  solution = {}, guess = {}", solution, guess);
  println!("Output: {:?}", Solution::master_mind(solution, guess));
}
