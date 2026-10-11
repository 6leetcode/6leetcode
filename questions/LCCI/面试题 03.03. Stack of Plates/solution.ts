// ------------------------------- solution begin -------------------------------
class StackOfPlates {
  private cap: number;
  private stacks: number[][] = [];

  constructor(cap: number) {
    this.cap = cap;
  }

  push(val: number): void {
    if (this.cap === 0) return;
    if (this.stacks.length === 0 || this.stacks[this.stacks.length - 1].length === this.cap) {
      this.stacks.push([]);
    }
    this.stacks[this.stacks.length - 1].push(val);
  }

  pop(): number {
    if (this.stacks.length === 0) return -1;
    const last = this.stacks[this.stacks.length - 1];
    const v = last.pop()!;
    if (last.length === 0) this.stacks.pop();
    return v;
  }

  popAt(index: number): number {
    if (index < 0 || index >= this.stacks.length) return -1;
    const v = this.stacks[index].pop()!;
    if (this.stacks[index].length === 0) this.stacks.splice(index, 1);
    return v;
  }
}
// ------------------------------- solution end ---------------------------------

console.log(`Input:  ["StackOfPlates", "push", "push", "push", "popAt", "popAt", "popAt"]`);
const obj = new StackOfPlates(2);
obj.push(1);
obj.push(2);
obj.push(3);
console.log(`Output: [null, null, null, null, ${obj.popAt(0)}, ${obj.popAt(0)}, ${obj.popAt(0)}]`);
