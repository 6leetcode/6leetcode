struct Solution {}

impl Solution {
    pub fn reverse_string(s: &mut Vec<char>) {
        let mut i = 0;
        let mut j = s.len() - 1;
        while i < j {
            let temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i = i + 1;
            j = j - 1;
        }
    }
}

fn main() {
    let mut input = vec!['h', 'e', 'l', 'l', 'o'];
    println!("Input:  {:?}", input);
    Solution::reverse_string(&mut input);
    println!("Output: {:?}", input);
}
