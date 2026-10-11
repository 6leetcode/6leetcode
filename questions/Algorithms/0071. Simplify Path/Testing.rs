pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn simplify_path(path: String) -> String {
    let mut st: Vec<&str> = vec![];
    for tok in path.split('/') {
      if tok.is_empty() || tok == "." {
        continue;
      }
      if tok == ".." {
        st.pop();
      } else {
        st.push(tok);
      }
    }
    format!("/{}", st.join("/"))
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = String::from("/a/./b/../../c/");
  println!("Input:  {}", input);
  println!("Output: {}", Solution::simplify_path(input));
}
