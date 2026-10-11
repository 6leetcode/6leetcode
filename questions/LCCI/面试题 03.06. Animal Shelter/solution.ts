// ------------------------------- solution begin -------------------------------
class AnimalShelf {
  private cats: Array<[number, number]> = [];
  private dogs: Array<[number, number]> = [];
  private order = 0;

  enqueue(animal: number[]): void {
    if (animal[1] === 0) this.cats.push([animal[0], this.order++]);
    else this.dogs.push([animal[0], this.order++]);
  }

  dequeueAny(): number[] {
    if (this.cats.length === 0 && this.dogs.length === 0) return [-1, -1];
    if (this.dogs.length === 0 || (this.cats.length > 0 && this.cats[0][1] < this.dogs[0][1])) {
      const [num] = this.cats.shift()!;
      return [num, 0];
    }
    const [num] = this.dogs.shift()!;
    return [num, 1];
  }

  dequeueDog(): number[] {
    if (this.dogs.length === 0) return [-1, -1];
    const [num] = this.dogs.shift()!;
    return [num, 1];
  }

  dequeueCat(): number[] {
    if (this.cats.length === 0) return [-1, -1];
    const [num] = this.cats.shift()!;
    return [num, 0];
  }
}
// ------------------------------- solution end ---------------------------------

console.log(`Input:  ["AnimalShelf", "enqueue", "enqueue", "enqueue", "dequeueDog", "dequeueCat", "dequeueAny"]`);
const obj = new AnimalShelf();
obj.enqueue([0, 0]);
obj.enqueue([1, 0]);
obj.enqueue([2, 1]);
const r1 = obj.dequeueDog();
const r2 = obj.dequeueCat();
const r3 = obj.dequeueAny();
console.log(`Output: [null, null, null, null, [${r1.join(',')}], [${r2.join(',')}], [${r3.join(',')}]]`);
