pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn full_justify(words: Vec<String>, max_width: i32) -> Vec<String> {
    let max_width = max_width as usize;
    let mut res = vec![];
    let n = words.len();
    let mut i = 0;
    while i < n {
      let mut j = i;
      let mut length = 0;
      while j < n && length + words[j].len() + (j - i) <= max_width {
        length += words[j].len();
        j += 1;
      }
      let count = j - i;
      let line: String;
      if j == n || count == 1 {
        let mut l = words[i..j].join(" ");
        l.push_str(&" ".repeat(max_width - l.len()));
        line = l;
      } else {
        let total: usize = words[i..j].iter().map(|w| w.len()).sum();
        let gaps = count - 1;
        let spaces = max_width - total;
        let base = spaces / gaps;
        let extra = spaces % gaps;
        let mut parts: Vec<String> = vec![];
        for k in i..j {
          parts.push(words[k].clone());
          if k != j - 1 {
            let sp = base + if k - i < extra { 1 } else { 0 };
            parts.push(" ".repeat(sp));
          }
        }
        line = parts.join("");
      }
      res.push(line);
      i = j;
    }
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input: Vec<String> = ["This", "is", "an", "example", "of", "text", "justification."]
    .iter()
    .map(|s| s.to_string())
    .collect();
  let max_width = 16;
  println!("Input:  {:?} {}", input, max_width);
  println!("Output: {:?}", Solution::full_justify(input, max_width));
}
