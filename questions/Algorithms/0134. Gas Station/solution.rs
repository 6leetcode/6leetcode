pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn can_complete_circuit(gas: Vec<i32>, cost: Vec<i32>) -> i32 {
    let mut total = 0;
    let mut tank = 0;
    let mut start = 0;

    for i in 0..gas.len() {
      let diff = gas[i] - cost[i];
      total += diff;
      tank += diff;
      if tank < 0 {
        start = i as i32 + 1;
        tank = 0;
      }
    }

    if total >= 0 {
      start
    } else {
      -1
    }
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let gas1 = vec![1, 2, 3, 4, 5];
  let cost1 = vec![3, 4, 5, 1, 2];
  println!("Input:  {:?} {:?}", gas1, cost1);
  println!("Output: {}", Solution::can_complete_circuit(gas1, cost1));

  let gas2 = vec![2, 3, 4];
  let cost2 = vec![3, 4, 3];
  println!("Input:  {:?} {:?}", gas2, cost2);
  println!("Output: {}", Solution::can_complete_circuit(gas2, cost2));
}
