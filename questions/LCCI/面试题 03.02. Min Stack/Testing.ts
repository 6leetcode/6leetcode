// ------------------------------- solution begin -------------------------------
class MinStack {
  private data: number[] = [];
  private mins: number[] = [];

  push(x: number): void {
    this.data.push(x);
    this.mins.push(this.mins.length === 0 ? x : Math.min(x, this.mins[this.mins.length - 1]));
  }

  pop(): void {
    this.data.pop();
    this.mins.pop();
  }

  top(): number {
    return this.data[this.data.length - 1];
  }

  getMin(): number {
    return this.mins[this.mins.length - 1];
  }
}
// ------------------------------- solution end ---------------------------------

console.log(`Input:  ["MinStack", "push", "push", "push", "getMin", "pop", "top", "getMin"]`);
const obj = new MinStack();
obj.push(-2);
obj.push(0);
obj.push(-3);
const a = obj.getMin();
obj.pop();
const b = obj.top();
const c = obj.getMin();
console.log(`Output: [null, null, null, null, ${a}, null, ${b}, ${c}]`);
