pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn largest_rectangle_area(heights: Vec<i32>) -> i32 {
    let n = heights.len();
    let mut st: Vec<usize> = vec![];
    let mut max_area = 0;
    for i in 0..=n {
      let h = if i < n { heights[i] } else { 0 };
      while let Some(&top) = st.last() {
        if heights[top] <= h {
          break;
        }
        let height = heights[st.pop().unwrap()];
        let width = if st.is_empty() {
          i as i32
        } else {
          i as i32 - *st.last().unwrap() as i32 - 1
        };
        max_area = max_area.max(height * width);
      }
      st.push(i);
    }
    max_area
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = vec![2, 1, 5, 6, 2, 3];
  println!("Input:  {:?}", input);
  println!("Output: {}", Solution::largest_rectangle_area(input));
}
