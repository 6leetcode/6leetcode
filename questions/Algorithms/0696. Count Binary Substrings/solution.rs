struct Solution {}

impl Solution {
    pub fn count_binary_substrings(s: String) -> i32 {
        let mut n = 0;
        let mut pre = 0;
        let mut curr = 1;
        let len = s.len() - 1;
        let bytes = s.as_bytes();
        for i in 0..len {
            if bytes[i] == bytes[i + 1] {
                curr += 1;
            } else {
                pre = curr;
                curr = 1;
            }
            if pre >= curr {
                n += 1;
            }
        }
        return n;
    }
}

fn main() {
    let input = String::from("00110011");
    println!("Input:  {}", input);
    println!("Output: {}", Solution::count_binary_substrings(input));
}
