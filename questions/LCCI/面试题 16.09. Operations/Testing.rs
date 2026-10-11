pub struct Operations {}

// ------------------------------- solution begin -------------------------------
impl Operations {
  pub fn new() -> Self {
    Operations {}
  }

  fn negate(a: i32) -> i32 {
    !a + 1
  }

  fn abs_val(a: i32) -> i32 {
    if a < 0 {
      Self::negate(a)
    } else {
      a
    }
  }

  pub fn minus(&self, a: i32, b: i32) -> i32 {
    a + Self::negate(b)
  }

  pub fn multiply(&self, a: i32, b: i32) -> i32 {
    let mut res = 0;
    let (mut x, mut y) = (Self::abs_val(a), Self::abs_val(b));
    while y > 0 {
      if y & 1 == 1 {
        res += x;
      }
      x <<= 1;
      y >>= 1;
    }
    if (a < 0) != (b < 0) {
      res = Self::negate(res);
    }
    res
  }

  pub fn divide(&self, a: i32, b: i32) -> i32 {
    if b == 0 {
      return 0;
    }
    let (mut x, y): (i64, i64) = (Self::abs_val(a) as i64, Self::abs_val(b) as i64);
    let mut q: i64 = 0;
    while x >= y {
      x -= y;
      q += 1;
    }
    let mut res = q as i32;
    if (a < 0) != (b < 0) {
      res = Self::negate(res);
    }
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  println!("Input:  minus(1, 2), multiply(3, 4), divide(5, -2)");
  let op = Operations::new();
  println!(
    "Output: [{}, {}, {}]",
    op.minus(1, 2),
    op.multiply(3, 4),
    op.divide(5, -2)
  );
}
