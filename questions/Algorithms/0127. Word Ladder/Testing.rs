pub struct Solution {}

// ------------------------------- solution begin -------------------------------
use std::collections::{HashSet, VecDeque};

impl Solution {
  pub fn ladder_length(begin_word: String, end_word: String, word_list: Vec<String>) -> i32 {
    let mut dict: HashSet<String> = word_list.into_iter().collect();
    if !dict.contains(&end_word) {
      return 0;
    }

    let mut queue: VecDeque<String> = VecDeque::new();
    queue.push_back(begin_word);
    let mut level = 1;

    while !queue.is_empty() {
      let size = queue.len();
      for _ in 0..size {
        let word = queue.pop_front().unwrap();
        if word == end_word {
          return level;
        }
        let bytes = word.into_bytes();
        for j in 0..bytes.len() {
          for c in b'a'..=b'z' {
            if c == bytes[j] {
              continue;
            }
            let mut nb = bytes.clone();
            nb[j] = c;
            let cand = String::from_utf8(nb).unwrap();
            if dict.remove(&cand) {
              queue.push_back(cand);
            }
          }
        }
      }
      level += 1;
    }

    0
  }
}
// ------------------------------- solution end ---------------------------------

fn show_words(list: &Vec<String>) -> String {
  let mut res = String::from("[");
  for (i, w) in list.iter().enumerate() {
    if i > 0 {
      res.push_str(", ");
    }
    res.push_str(&format!("\"{}\"", w));
  }
  res.push(']');
  res
}

fn main() {
  let list1: Vec<String> = vec!["hot", "dot", "dog", "lot", "log", "cog"]
    .iter()
    .map(|s| s.to_string())
    .collect();
  let list2: Vec<String> = vec!["hot", "dot", "dog", "lot", "log"]
    .iter()
    .map(|s| s.to_string())
    .collect();
  let list3: Vec<String> = vec!["hot", "dog", "dot"]
    .iter()
    .map(|s| s.to_string())
    .collect();

  println!(
    "Input:  beginWord = \"hit\", endWord = \"cog\", wordList = {}",
    show_words(&list1)
  );
  println!(
    "Output: {}",
    Solution::ladder_length("hit".to_string(), "cog".to_string(), list1)
  );

  println!(
    "Input:  beginWord = \"hit\", endWord = \"cog\", wordList = {}",
    show_words(&list2)
  );
  println!(
    "Output: {}",
    Solution::ladder_length("hit".to_string(), "cog".to_string(), list2)
  );

  println!(
    "Input:  beginWord = \"hot\", endWord = \"dog\", wordList = {}",
    show_words(&list3)
  );
  println!(
    "Output: {}",
    Solution::ladder_length("hot".to_string(), "dog".to_string(), list3)
  );
}
