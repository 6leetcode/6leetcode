// ------------------------------- solution begin -------------------------------
class Operations {
  private negate(a: number): number {
    return ~a + 1;
  }

  private absVal(a: number): number {
    return a < 0 ? this.negate(a) : a;
  }

  minus(a: number, b: number): number {
    return a + this.negate(b);
  }

  multiply(a: number, b: number): number {
    let res = 0;
    let x = this.absVal(a);
    let y = this.absVal(b);
    while (y > 0) {
      if (y & 1) res += x;
      x <<= 1;
      y >>= 1;
    }
    if (a < 0 !== b < 0) res = this.negate(res);
    return res;
  }

  divide(a: number, b: number): number {
    if (b === 0) return 0;
    let x = this.absVal(a);
    const y = this.absVal(b);
    let q = 0;
    while (x >= y) {
      x -= y;
      q++;
    }
    if (a < 0 !== b < 0) q = this.negate(q);
    return q;
  }
}
// ------------------------------- solution end ---------------------------------

console.log(`Input:  minus(1, 2), multiply(3, 4), divide(5, -2)`);
const op = new Operations();
console.log(`Output: [${op.minus(1, 2)}, ${op.multiply(3, 4)}, ${op.divide(5, -2)}]`);
