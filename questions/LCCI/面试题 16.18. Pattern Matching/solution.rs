pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn pattern_matching(pattern: String, value: String) -> bool {
    let n = value.len();
    let p = pattern.as_bytes();
    if p.is_empty() {
      return n == 0;
    }
    let na = p.iter().filter(|&&c| c == b'a').count();
    let nb = p.len() - na;

    let check = |la: usize, lb: usize| -> bool {
      let (mut a, mut b): (Option<&str>, Option<&str>) = (None, None);
      let mut pos = 0usize;
      for &c in p {
        let len = if c == b'a' { la } else { lb };
        if pos + len > n {
          return false;
        }
        let sub = &value[pos..pos + len];
        if c == b'a' {
          match a {
            None => a = Some(sub),
            Some(prev) => {
              if prev != sub {
                return false;
              }
            }
          }
        } else {
          match b {
            None => b = Some(sub),
            Some(prev) => {
              if prev != sub {
                return false;
              }
            }
          }
        }
        pos += len;
      }
      if pos != n {
        return false;
      }
      if let (Some(x), Some(y)) = (a, b) {
        if x == y {
          return false;
        }
      }
      true
    };

    for la in 0..=n {
      if na * la > n {
        break;
      }
      let rem = n - na * la;
      if nb == 0 {
        if rem == 0 && check(la, 0) {
          return true;
        }
      } else {
        if rem % nb != 0 {
          continue;
        }
        if check(la, rem / nb) {
          return true;
        }
      }
    }
    false
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let (pattern, value) = (String::from("abba"), String::from("dogcatcatdog"));
  println!("Input:  pattern = {}, value = {}", pattern, value);
  println!("Output: {}", Solution::pattern_matching(pattern, value));
}
