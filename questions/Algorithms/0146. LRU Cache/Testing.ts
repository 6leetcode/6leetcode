// ------------------------------- solution begin -------------------------------
class LRUCache {
  private capacity: number;
  private cache: Map<number, number>;

  constructor(capacity: number) {
    this.capacity = capacity;
    this.cache = new Map();
  }

  get(key: number): number {
    if (!this.cache.has(key)) return -1;
    const value = this.cache.get(key)!;
    this.cache.delete(key);
    this.cache.set(key, value);
    return value;
  }

  put(key: number, value: number): void {
    if (this.cache.has(key)) this.cache.delete(key);
    this.cache.set(key, value);
    if (this.cache.size > this.capacity) {
      this.cache.delete(this.cache.keys().next().value!);
    }
  }
}
// ------------------------------- solution end ---------------------------------

const cache = new LRUCache(2);
cache.put(1, 1);
cache.put(2, 2);
const a1 = cache.get(1);
cache.put(3, 3);
const a2 = cache.get(2);
cache.put(4, 4);
const a3 = cache.get(1);
const a4 = cache.get(3);
const a5 = cache.get(4);
console.log(
  `Input:  ["LRUCache","put","put","get","put","get","put","get","get","get"] [[2],[1,1],[2,2],[1],[3,3],[2],[4,4],[1],[3],[4]]`
);
console.log(`Output: [null, null, null, ${a1}, null, ${a2}, null, ${a3}, ${a4}, ${a5}]`);

const cache2 = new LRUCache(1);
cache2.put(2, 1);
const b1 = cache2.get(2);
cache2.put(3, 2);
const b2 = cache2.get(2);
const b3 = cache2.get(3);
console.log(`Input:  ["LRUCache","put","get","put","get","get"] [[1],[2,1],[2],[3,2],[2],[3]]`);
console.log(`Output: [null, null, ${b1}, null, ${b2}, ${b3}]`);
