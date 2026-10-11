pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn get_intersection_node(values_a: Vec<i32>, values_b: Vec<i32>, skip_a: i32, skip_b: i32) -> i32 {
    let (n, m) = (values_a.len() as i32, values_b.len() as i32);
    let common = n - skip_a;
    let _ = m;
    let mut a = skip_a;
    let mut b = skip_b;
    while a != b {
      a = if a == n { skip_b } else { a + 1 };
      b = if b == m { skip_a } else { b + 1 };
    }
    values_a[a as usize]
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let a = vec![4, 1, 8, 4, 5];
  let b = vec![5, 0, 1, 8, 4, 5];
  let (skip_a, skip_b) = (2, 3);
  println!("Input:  {:?}, {:?}", a, b);
  println!(
    "Output: Intersected at '{}'",
    Solution::get_intersection_node(a, b, skip_a, skip_b)
  );
}
