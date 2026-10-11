use std::collections::HashMap;

pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn count_eval(s: String, result: i32) -> i32 {
    let b = s.as_bytes();
    let mut memo: HashMap<(i32, i32, i32), i64> = HashMap::new();
    fn solve(
      b: &[u8],
      i: i32,
      j: i32,
      want: i32,
      memo: &mut HashMap<(i32, i32, i32), i64>,
    ) -> i64 {
      if i == j {
        return if (b[i as usize] - b'0') as i32 == want { 1 } else { 0 };
      }
      let key = (i, j, want);
      if let Some(&v) = memo.get(&key) {
        return v;
      }
      let mut total = 0i64;
      let mut k = i + 1;
      while k < j {
        let op = b[k as usize];
        let l0 = solve(b, i, k - 1, 0, memo);
        let l1 = solve(b, i, k - 1, 1, memo);
        let r0 = solve(b, k + 1, j, 0, memo);
        let r1 = solve(b, k + 1, j, 1, memo);
        let (t, f);
        if op == b'&' {
          t = l1 * r1;
          f = (l0 + l1) * (r0 + r1) - t;
        } else if op == b'|' {
          f = l0 * r0;
          t = (l0 + l1) * (r0 + r1) - f;
        } else {
          t = l0 * r1 + l1 * r0;
          f = l0 * r0 + l1 * r1;
        }
        total += if want == 1 { t } else { f };
        k += 2;
      }
      memo.insert(key, total);
      total
    }
    solve(b, 0, b.len() as i32 - 1, result, &mut memo) as i32
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let s = String::from("1^0|0|1");
  let result = 0;
  println!("Input:  s = {}, result = {}", s, result);
  println!("Output: {}", Solution::count_eval(s, result));
}
