pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn restore_ip_addresses(s: String) -> Vec<String> {
    fn dfs(
      b: &[u8],
      seg_id: usize,
      seg_start: usize,
      segments: &mut [i32; 4],
      res: &mut Vec<String>,
    ) {
      if seg_id == 4 {
        if seg_start == b.len() {
          res.push(format!(
            "{}.{}.{}.{}",
            segments[0], segments[1], segments[2], segments[3]
          ));
        }
        return;
      }
      if seg_start == b.len() {
        return;
      }
      if b[seg_start] == b'0' {
        segments[seg_id] = 0;
        dfs(b, seg_id + 1, seg_start + 1, segments, res);
      }
      let mut addr = 0i32;
      for seg_end in seg_start..b.len() {
        addr = addr * 10 + (b[seg_end] - b'0') as i32;
        if addr > 0 && addr <= 255 {
          segments[seg_id] = addr;
          dfs(b, seg_id + 1, seg_end + 1, segments, res);
        } else {
          break;
        }
      }
    }
    let mut res = vec![];
    let mut segments = [0i32; 4];
    dfs(s.as_bytes(), 0, 0, &mut segments, &mut res);
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = String::from("25525511135");
  println!("Input:  {}", input);
  println!("Output: {:?}", Solution::restore_ip_addresses(input));
}
