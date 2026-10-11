pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn partition(s: String) -> Vec<Vec<String>> {
    fn is_palindrome(bytes: &[u8], mut l: usize, mut r: usize) -> bool {
      while l < r {
        if bytes[l] != bytes[r] {
          return false;
        }
        l += 1;
        r -= 1;
      }
      true
    }

    fn backtrack(bytes: &[u8], start: usize, path: &mut Vec<String>, res: &mut Vec<Vec<String>>) {
      if start == bytes.len() {
        res.push(path.clone());
        return;
      }
      for end in start..bytes.len() {
        if is_palindrome(bytes, start, end) {
          path.push(String::from_utf8(bytes[start..=end].to_vec()).unwrap());
          backtrack(bytes, end + 1, path, res);
          path.pop();
        }
      }
    }

    let bytes = s.into_bytes();
    let mut res = vec![];
    let mut path = vec![];
    backtrack(&bytes, 0, &mut path, &mut res);
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  for s in vec!["aab", "a"] {
    println!("Input:  {}", s);
    println!("Output: {:?}", Solution::partition(s.to_string()));
  }
}
