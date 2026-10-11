// ------------------------------- solution begin -------------------------------
class MedianFinder {
  private lower: number[] = [];
  private upper: number[] = [];

  addNum(num: number): void {
    this.lower.push(num);
    this.lower.sort((a, b) => a - b);
    this.upper.push(this.lower.pop()!);
    this.upper.sort((a, b) => a - b);
    if (this.lower.length < this.upper.length) {
      this.lower.push(this.upper.shift()!);
      this.lower.sort((a, b) => a - b);
    }
  }

  findMedian(): number {
    if (this.lower.length > this.upper.length) {
      return this.lower[this.lower.length - 1];
    }
    return (this.lower[this.lower.length - 1] + this.upper[0]) / 2;
  }
}
// ------------------------------- solution end ---------------------------------

console.log(`Input:  addNum(1), addNum(2), findMedian(), addNum(3), findMedian()`);
const obj = new MedianFinder();
obj.addNum(1);
obj.addNum(2);
const a = obj.findMedian();
obj.addNum(3);
const b = obj.findMedian();
console.log(`Output: [${a}, ${b}]`);
