pub struct StreamRank {
  data: Vec<i32>,
}

// ------------------------------- solution begin -------------------------------
impl StreamRank {
  pub fn new() -> Self {
    StreamRank { data: vec![] }
  }

  pub fn track(&mut self, x: i32) {
    let pos = self.data.partition_point(|&v| v <= x);
    self.data.insert(pos, x);
  }

  pub fn get_rank_of_number(&self, x: i32) -> i32 {
    self.data.partition_point(|&v| v <= x) as i32
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  println!("Input:  [\"StreamRank\", \"getRankOfNumber\", \"track\", \"getRankOfNumber\"], [[], [1], [0], [0]]");
  let mut obj = StreamRank::new();
  let a = obj.get_rank_of_number(1);
  obj.track(0);
  let b = obj.get_rank_of_number(0);
  println!("Output: [null, {}, null, {}]", a, b);
}
