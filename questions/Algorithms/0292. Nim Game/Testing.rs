pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
    pub fn can_win_nim(n: i32) -> bool {
        n % 4 == 0
    }
}
// ------------------------------- solution end ---------------------------------

fn main() {
    let input: i32 = 4;
    println!("Input:  {}", input);
    println!("Output: {}", Solution::can_win_nim(input));
}
