pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn number_to_words(num: i32) -> String {
    const ONES: [&str; 20] = [
      "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven",
      "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen",
    ];
    const TENS: [&str; 10] = [
      "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety",
    ];
    const THOUSANDS: [&str; 4] = ["", "Thousand", "Million", "Billion"];

    fn below1000(mut n: i32, out: &mut Vec<String>) {
      if n >= 100 {
        out.push(ONES[(n / 100) as usize].to_string());
        out.push("Hundred".to_string());
        n %= 100;
      }
      if n >= 20 {
        out.push(TENS[(n / 10) as usize].to_string());
        n %= 10;
      }
      if n > 0 {
        out.push(ONES[n as usize].to_string());
      }
    }

    if num == 0 {
      return "Zero".to_string();
    }
    let mut out = vec![];
    let mut num = num;
    if num < 0 {
      out.push("Negative".to_string());
      num = -num;
    }
    let mut chunks = vec![];
    let mut tmp = num;
    while tmp > 0 {
      chunks.push(tmp % 1000);
      tmp /= 1000;
    }
    for i in (0..chunks.len()).rev() {
      if chunks[i] == 0 {
        continue;
      }
      below1000(chunks[i], &mut out);
      if !THOUSANDS[i].is_empty() {
        out.push(THOUSANDS[i].to_string());
      }
    }
    out.join(" ")
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = 12345;
  println!("Input:  {}", input);
  println!("Output: \"{}\"", Solution::number_to_words(input));
}
