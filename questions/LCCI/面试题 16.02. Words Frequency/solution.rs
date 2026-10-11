use std::collections::HashMap;

pub struct WordsFrequency {
  freq: HashMap<String, i32>,
}

// ------------------------------- solution begin -------------------------------
impl WordsFrequency {
  pub fn new(book: Vec<String>) -> Self {
    let mut freq = HashMap::new();
    for w in book {
      *freq.entry(w).or_insert(0) += 1;
    }
    WordsFrequency { freq }
  }

  pub fn get(&self, word: String) -> i32 {
    *self.freq.get(&word).unwrap_or(&0)
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let book: Vec<String> = ["i", "have", "an", "apple", "he", "have", "a", "pen"]
    .iter()
    .map(|s| s.to_string())
    .collect();
  println!("Input:  book = [i, have, an, apple, he, have, a, pen]");
  let obj = WordsFrequency::new(book);
  println!(
    "Output: [{}, {}, {}, {}, {}]",
    obj.get("you".to_string()),
    obj.get("have".to_string()),
    obj.get("an".to_string()),
    obj.get("apple".to_string()),
    obj.get("pen".to_string())
  );
}
