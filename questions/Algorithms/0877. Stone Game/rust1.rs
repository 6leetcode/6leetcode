pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
    pub fn stone_game(_piles: Vec<i32>) -> bool {
        true
    }
}
// ------------------------------- solution end ---------------------------------

fn main() {
    let input = vec![1, 2, 3, 4];
    println!("Input:  {:?}", input);
    println!("Output: {}", Solution::stone_game(input));
}
