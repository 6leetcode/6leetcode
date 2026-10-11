pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn find_closest(words: Vec<String>, word1: String, word2: String) -> i32 {
    let mut best = words.len() as i32;
    let (mut p1, mut p2) = (-1i32, -1i32);
    for (i, w) in words.iter().enumerate() {
      if *w == word1 {
        p1 = i as i32;
        if p2 != -1 {
          best = best.min(i as i32 - p2);
        }
      } else if *w == word2 {
        p2 = i as i32;
        if p1 != -1 {
          best = best.min(i as i32 - p1);
        }
      }
    }
    best
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let words: Vec<String> = ["I", "am", "a", "student", "from", "a", "university", "in", "a", "city"]
    .iter()
    .map(|s| s.to_string())
    .collect();
  println!("Input:  words = [...], word1 = \"a\", word2 = \"student\"");
  println!(
    "Output: {}",
    Solution::find_closest(words, "a".to_string(), "student".to_string())
  );
}
