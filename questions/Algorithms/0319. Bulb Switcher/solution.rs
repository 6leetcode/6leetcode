use std::f32;

struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
    pub fn bulb_switch(n: i32) -> i32 {
        let m = n as f32;
        return m.sqrt() as i32;
    }
}
// ------------------------------- solution end ---------------------------------

fn main() {
    let input: i32 = 16;
    println!("Input:  {}", input);
    println!("Output: {}", Solution::bulb_switch(input));
}
