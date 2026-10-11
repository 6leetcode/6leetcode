use std::collections::HashMap;

pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn truly_most_popular(names: Vec<String>, synonyms: Vec<String>) -> Vec<String> {
    let mut parent: HashMap<String, String> = HashMap::new();
    fn find(parent: &mut HashMap<String, String>, x: &str) -> String {
      if !parent.contains_key(x) {
        parent.insert(x.to_string(), x.to_string());
      }
      let p = parent.get(x).unwrap().clone();
      if p != x {
        let r = find(parent, &p);
        parent.insert(x.to_string(), r.clone());
        r
      } else {
        p
      }
    }
    let mut freq: HashMap<String, i32> = HashMap::new();
    for s in &names {
      let pos = s.find('(').unwrap();
      let name = s[..pos].to_string();
      let cnt: i32 = s[pos + 1..s.len() - 1].parse().unwrap();
      freq.insert(name.clone(), cnt);
      find(&mut parent, &name);
    }
    for s in &synonyms {
      let inside = &s[1..s.len() - 1];
      let parts: Vec<&str> = inside.split(',').collect();
      let ra = find(&mut parent, parts[0]);
      let rb = find(&mut parent, parts[1]);
      if ra != rb {
        if ra < rb {
          parent.insert(rb, ra);
        } else {
          parent.insert(ra, rb);
        }
      }
    }
    let mut agg: HashMap<String, i32> = HashMap::new();
    for (name, cnt) in &freq {
      let r = find(&mut parent, name);
      *agg.entry(r).or_insert(0) += cnt;
    }
    let mut res: Vec<String> = agg
      .into_iter()
      .map(|(k, v)| format!("{}({})", k, v))
      .collect();
    res.sort();
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let names: Vec<String> = ["John(15)", "Jon(12)", "Chris(13)", "Kris(4)", "Christopher(19)"]
    .iter()
    .map(|s| s.to_string())
    .collect();
  let synonyms: Vec<String> = [
    "(Jon,John)",
    "(John,Johnny)",
    "(Chris,Kris)",
    "(Chris,Christopher)",
  ]
  .iter()
  .map(|s| s.to_string())
  .collect();
  println!("Input:  names = [John(15), Jon(12), Chris(13), Kris(4), Christopher(19)], synonyms = [(Jon,John),(John,Johnny),(Chris,Kris),(Chris,Christopher)]");
  println!("Output: {:?}", Solution::truly_most_popular(names, synonyms));
}
