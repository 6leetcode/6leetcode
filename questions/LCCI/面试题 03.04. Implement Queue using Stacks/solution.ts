// ------------------------------- solution begin -------------------------------
class MyQueue {
  private inStack: number[] = [];
  private outStack: number[] = [];

  push(x: number): void {
    this.inStack.push(x);
  }

  private transfer(): void {
    if (this.outStack.length === 0) {
      while (this.inStack.length > 0) this.outStack.push(this.inStack.pop()!);
    }
  }

  pop(): number {
    this.transfer();
    return this.outStack.pop()!;
  }

  peek(): number {
    this.transfer();
    return this.outStack[this.outStack.length - 1];
  }

  empty(): boolean {
    return this.inStack.length === 0 && this.outStack.length === 0;
  }
}
// ------------------------------- solution end ---------------------------------

console.log(`Input:  ["MyQueue", "push", "push", "peek", "pop", "empty"]`);
const obj = new MyQueue();
obj.push(1);
obj.push(2);
const p = obj.peek();
const q = obj.pop();
const e = obj.empty();
console.log(`Output: [null, null, null, ${p}, ${q}, ${e}]`);
