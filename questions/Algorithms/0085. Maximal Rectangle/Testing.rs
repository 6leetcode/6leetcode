pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  fn largest(heights: &[i32]) -> i32 {
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

  pub fn maximal_rectangle(matrix: Vec<Vec<char>>) -> i32 {
    if matrix.is_empty() {
      return 0;
    }
    let n = matrix[0].len();
    let mut heights = vec![0i32; n];
    let mut max_area = 0;
    for row in &matrix {
      for j in 0..n {
        heights[j] = if row[j] == '1' { heights[j] + 1 } else { 0 };
      }
      max_area = max_area.max(Solution::largest(&heights));
    }
    max_area
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = vec![
    vec!['1', '0', '1', '0', '0'],
    vec!['1', '0', '1', '1', '1'],
    vec!['1', '1', '1', '1', '1'],
    vec!['1', '0', '0', '1', '0'],
  ];
  println!("Input:  {:?}", input);
  println!("Output: {}", Solution::maximal_rectangle(input));
}
