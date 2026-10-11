pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn length_of_lis(nums: Vec<i32>) -> i32 {
    let mut tails: Vec<i32> = Vec::new();
    for num in nums {
      match tails.binary_search(&num) {
        Ok(i) => tails[i] = num,
        Err(i) => {
          if i == tails.len() {
            tails.push(num);
          } else {
            tails[i] = num;
          }
        }
      }
    }
    tails.len() as i32
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let inputs = vec![
    vec![10, 9, 2, 5, 3, 7, 101, 18],
    vec![0, 1, 0, 3, 2, 3],
    vec![7, 7, 7, 7, 7],
  ];
  for input in inputs {
    println!("Input:  {:?}", input);
    println!("Output: {}", Solution::length_of_lis(input));
  }
}
