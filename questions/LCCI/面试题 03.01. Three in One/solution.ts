// ------------------------------- solution begin -------------------------------
class TripleInOne {
  private arr: number[];
  private size: number;
  private top: number[] = [0, 0, 0];

  constructor(stackSize: number) {
    this.size = stackSize;
    this.arr = new Array(3 * stackSize).fill(0);
  }

  push(stackNum: number, value: number): void {
    if (this.top[stackNum] < this.size) {
      this.arr[stackNum * this.size + this.top[stackNum]++] = value;
    }
  }

  pop(stackNum: number): number {
    if (this.top[stackNum] === 0) return -1;
    return this.arr[stackNum * this.size + --this.top[stackNum]];
  }

  peek(stackNum: number): number {
    if (this.top[stackNum] === 0) return -1;
    return this.arr[stackNum * this.size + this.top[stackNum] - 1];
  }

  isEmpty(stackNum: number): boolean {
    return this.top[stackNum] === 0;
  }
}
// ------------------------------- solution end ---------------------------------

console.log(`Input:  ["TripleInOne", "push", "push", "pop", "pop", "pop", "isEmpty"]`);
const obj = new TripleInOne(1);
obj.push(0, 1);
obj.push(0, 2);
console.log(`Output: [null, null, null, ${obj.pop(0)}, ${obj.pop(0)}, ${obj.pop(0)}, ${obj.isEmpty(0)}]`);
