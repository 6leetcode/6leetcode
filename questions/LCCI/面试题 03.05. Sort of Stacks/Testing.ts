// ------------------------------- solution begin -------------------------------
class SortedStack {
  private data: number[] = [];

  push(val: number): void {
    const tmp: number[] = [];
    while (this.data.length > 0 && this.data[this.data.length - 1] < val) {
      tmp.push(this.data.pop()!);
    }
    this.data.push(val);
    while (tmp.length > 0) this.data.push(tmp.pop()!);
  }

  pop(): void {
    if (this.data.length > 0) this.data.pop();
  }

  peek(): number {
    return this.data.length > 0 ? this.data[this.data.length - 1] : -1;
  }

  isEmpty(): boolean {
    return this.data.length === 0;
  }
}
// ------------------------------- solution end ---------------------------------

console.log(`Input:  ["SortedStack", "push", "push", "peek", "pop", "peek"]`);
const obj = new SortedStack();
obj.push(1);
obj.push(2);
const a = obj.peek();
obj.pop();
const b = obj.peek();
console.log(`Output: [null, null, null, ${a}, null, ${b}]`);
