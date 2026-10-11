// ------------------------------- solution begin -------------------------------
class StreamRank {
  private data: number[] = [];

  track(x: number): void {
    let lo = 0;
    let hi = this.data.length;
    while (lo < hi) {
      const mid = lo + Math.floor((hi - lo) / 2);
      if (this.data[mid] <= x) lo = mid + 1;
      else hi = mid;
    }
    this.data.splice(lo, 0, x);
  }

  getRankOfNumber(x: number): number {
    let lo = 0;
    let hi = this.data.length;
    while (lo < hi) {
      const mid = lo + Math.floor((hi - lo) / 2);
      if (this.data[mid] <= x) lo = mid + 1;
      else hi = mid;
    }
    return lo;
  }
}
// ------------------------------- solution end ---------------------------------

console.log(`Input:  ["StreamRank", "getRankOfNumber", "track", "getRankOfNumber"], [[], [1], [0], [0]]`);
const obj = new StreamRank();
const a = obj.getRankOfNumber(1);
obj.track(0);
const b = obj.getRankOfNumber(0);
console.log(`Output: [null, ${a}, null, ${b}]`);
