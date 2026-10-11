pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn num_k_len_substr_no_repeats(s: String, k: i32) -> i32 {
    let b = s.as_bytes();
    let n = b.len();
    let k = k as usize;
    if n < k {
      return 0;
    }
    let mut count = [0i32; 26];
    let mut distinct = 0;
    let mut ans = 0;
    for i in 0..n {
      let idx = (b[i] - b'a') as usize;
      if count[idx] == 0 {
        distinct += 1;
      }
      count[idx] += 1;
      if i >= k {
        let rm = (b[i - k] - b'a') as usize;
        count[rm] -= 1;
        if count[rm] == 0 {
          distinct -= 1;
        }
      }
      if i >= k - 1 && distinct == k as i32 {
        ans += 1;
      }
    }
    ans
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input1 = String::from("havefunonleetcode");
  let input2 = 5;
  println!("Input:  {} {}", input1, input2);
  println!("Output: {}", Solution::num_k_len_substr_no_repeats(input1, input2));
}
