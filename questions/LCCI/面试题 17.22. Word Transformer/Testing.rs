pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn find_ladders(begin_word: String, end_word: String, word_list: Vec<String>) -> Vec<String> {
    let mut words = vec![begin_word];
    words.extend(word_list);
    let n = words.len();
    let end_idx = match words.iter().position(|w| *w == end_word) {
      Some(i) => i,
      None => return vec![],
    };
    let diff_one = |a: &str, b: &str| -> bool {
      a.bytes().zip(b.bytes()).filter(|(x, y)| x != y).count() == 1
    };
    let mut dist = vec![-1i32; n];
    let mut prev = vec![-1i32; n];
    let mut queue = vec![0usize];
    dist[0] = 0;
    let mut found = -1i32;
    let mut head = 0;
    while head < queue.len() {
      let u = queue[head];
      head += 1;
      if u == end_idx {
        found = u as i32;
        break;
      }
      for v in 0..n {
        if dist[v] == -1 && diff_one(&words[u], &words[v]) {
          dist[v] = dist[u] + 1;
          prev[v] = u as i32;
          queue.push(v);
        }
      }
    }
    if found == -1 {
      return vec![];
    }
    let mut res = vec![];
    let mut cur = found;
    while cur != -1 {
      res.push(words[cur as usize].clone());
      cur = prev[cur as usize];
    }
    res.reverse();
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let word_list: Vec<String> = ["hot", "dot", "dog", "lot", "log", "cog"]
    .iter()
    .map(|s| s.to_string())
    .collect();
  println!("Input:  beginWord = \"hit\", endWord = \"cog\", wordList = [\"hot\",\"dot\",\"dog\",\"lot\",\"log\",\"cog\"]");
  println!(
    "Output: {:?}",
    Solution::find_ladders("hit".to_string(), "cog".to_string(), word_list)
  );
}
