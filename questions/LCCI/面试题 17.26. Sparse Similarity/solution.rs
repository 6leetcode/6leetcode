use std::collections::HashMap;

pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn compute_similarities(docs: Vec<Vec<i32>>) -> Vec<String> {
    let mut word_docs: HashMap<i32, Vec<usize>> = HashMap::new();
    for (i, doc) in docs.iter().enumerate() {
      for &w in doc {
        word_docs.entry(w).or_insert_with(Vec::new).push(i);
      }
    }
    let mut inter: HashMap<(usize, usize), i32> = HashMap::new();
    for ids in word_docs.values() {
      for a in 0..ids.len() {
        for b in a + 1..ids.len() {
          *inter.entry((ids[a], ids[b])).or_insert(0) += 1;
        }
      }
    }
    let mut pairs: Vec<((usize, usize), i32)> = inter.into_iter().collect();
    pairs.sort_by_key(|(k, _)| *k);
    pairs
      .into_iter()
      .map(|((i, j), c)| {
        let uni = (docs[i].len() + docs[j].len()) as f64 - c as f64;
        format!("{},{}: {:.4}", i, j, c as f64 / uni)
      })
      .collect()
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let docs = vec![
    vec![14, 15, 100, 9, 3],
    vec![32, 1, 9, 3, 5],
    vec![15, 29, 2, 6, 8, 7],
    vec![7, 10],
  ];
  println!("Input:  [[14,15,100,9,3],[32,1,9,3,5],[15,29,2,6,8,7],[7,10]]");
  println!("Output: {:?}", Solution::compute_similarities(docs));
}
