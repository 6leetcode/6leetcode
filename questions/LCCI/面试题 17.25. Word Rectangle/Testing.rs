use std::collections::HashMap;

pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn max_rectangle(words: Vec<String>) -> Vec<String> {
    let mut by_len: HashMap<usize, Vec<String>> = HashMap::new();
    for w in &words {
      by_len.entry(w.len()).or_insert_with(Vec::new).push(w.clone());
    }
    let lengths: Vec<usize> = by_len.keys().cloned().collect();
    let mut best_area = 0;
    let mut best: Vec<String> = vec![];
    for &w in &lengths {
      for &h in &lengths {
        if w * h <= best_area {
          continue;
        }
        let col_words = by_len.get(&h).unwrap().clone();
        let mut rows: Vec<String> = vec![];
        fn backtrack(
          w: usize,
          h: usize,
          by_w: &Vec<String>,
          col_words: &Vec<String>,
          rows: &mut Vec<String>,
          best_area: &mut usize,
          best: &mut Vec<String>,
        ) {
          if rows.len() == h {
            for c in 0..w {
              let col: String = rows.iter().map(|r| r.as_bytes()[c] as char).collect();
              if !col_words.contains(&col) {
                return;
              }
            }
            *best_area = w * h;
            *best = rows.clone();
            return;
          }
          for word in by_w {
            rows.push(word.clone());
            let mut ok = true;
            for c in 0..w {
              let prefix: String = rows.iter().map(|r| r.as_bytes()[c] as char).collect();
              if !col_words.iter().any(|cw| cw.starts_with(&prefix)) {
                ok = false;
                break;
              }
            }
            if ok {
              backtrack(w, h, by_w, col_words, rows, best_area, best);
            }
            rows.pop();
          }
        }
        let by_w = by_len.get(&w).unwrap().clone();
        backtrack(w, h, &by_w, &col_words, &mut rows, &mut best_area, &mut best);
      }
    }
    best
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let words: Vec<String> = ["this", "real", "hard", "trh", "hea", "iar", "sld"]
    .iter()
    .map(|s| s.to_string())
    .collect();
  println!("Input:  [\"this\", \"real\", \"hard\", \"trh\", \"hea\", \"iar\", \"sld\"]");
  println!("Output: {:?}", Solution::max_rectangle(words));
}
