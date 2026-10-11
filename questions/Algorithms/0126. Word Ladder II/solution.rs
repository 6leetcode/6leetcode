pub struct Solution {}

// ------------------------------- solution begin -------------------------------
use std::collections::{HashMap, HashSet};

impl Solution {
  fn dfs(
    word: &str,
    begin: &str,
    parents: &HashMap<String, Vec<String>>,
    path: &mut Vec<String>,
    res: &mut Vec<Vec<String>>,
  ) {
    if word == begin {
      let mut r = path.clone();
      r.reverse();
      res.push(r);
      return;
    }
    if let Some(ps) = parents.get(word) {
      for p in ps {
        path.push(p.clone());
        Solution::dfs(p, begin, parents, path, res);
        path.pop();
      }
    }
  }

  pub fn find_ladders(begin_word: String, end_word: String, word_list: Vec<String>) -> Vec<Vec<String>> {
    let dict: HashSet<String> = word_list.into_iter().collect();
    let mut res: Vec<Vec<String>> = Vec::new();
    if !dict.contains(&end_word) {
      return res;
    }

    let mut parents: HashMap<String, Vec<String>> = HashMap::new();
    let mut visited: HashSet<String> = HashSet::new();
    visited.insert(begin_word.clone());
    let mut level: Vec<String> = vec![begin_word.clone()];
    let mut found = false;

    while !level.is_empty() && !found {
      let mut next: Vec<String> = Vec::new();
      let mut next_set: HashSet<String> = HashSet::new();
      for word in &level {
        let bytes = word.clone().into_bytes();
        for j in 0..bytes.len() {
          for c in b'a'..=b'z' {
            if c == bytes[j] {
              continue;
            }
            let mut nb = bytes.clone();
            nb[j] = c;
            let cand = String::from_utf8(nb).unwrap();
            if dict.contains(&cand) && !visited.contains(&cand) {
              if next_set.insert(cand.clone()) {
                next.push(cand.clone());
              }
              parents.entry(cand.clone()).or_insert_with(Vec::new).push(word.clone());
              if cand == end_word {
                found = true;
              }
            }
          }
        }
      }
      for w in &next {
        visited.insert(w.clone());
      }
      level = next;
    }

    if !found {
      return res;
    }

    let mut path: Vec<String> = vec![end_word.clone()];
    Solution::dfs(&end_word, &begin_word, &parents, &mut path, &mut res);
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn show_paths(paths: &Vec<Vec<String>>) -> String {
  let mut res = String::from("[");
  for (i, path) in paths.iter().enumerate() {
    if i > 0 {
      res.push_str(", ");
    }
    res.push('[');
    for (j, w) in path.iter().enumerate() {
      if j > 0 {
        res.push_str(", ");
      }
      res.push_str(&format!("\"{}\"", w));
    }
    res.push(']');
  }
  res.push(']');
  res
}

fn to_words(list: &[&str]) -> Vec<String> {
  list.iter().map(|s| s.to_string()).collect()
}

fn main() {
  let list1 = to_words(&["hot", "dot", "dog", "lot", "log", "cog"]);
  let list2 = to_words(&["hot", "dot", "dog", "lot", "log"]);

  println!(
    "Input:  beginWord = \"hit\", endWord = \"cog\", wordList = {:?}",
    list1
  );
  let r1 = Solution::find_ladders("hit".to_string(), "cog".to_string(), list1);
  println!("Output: {}", show_paths(&r1));

  println!(
    "Input:  beginWord = \"hit\", endWord = \"cog\", wordList = {:?}",
    list2
  );
  let r2 = Solution::find_ladders("hit".to_string(), "cog".to_string(), list2);
  println!("Output: {}", show_paths(&r2));
}
