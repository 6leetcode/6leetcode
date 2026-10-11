// ------------------------------- solution begin -------------------------------
class LRUCache {
  private capacity: number;
  private map = new Map<number, number>();

  constructor(capacity: number) {
    this.capacity = capacity;
  }

  get(key: number): number {
    if (!this.map.has(key)) return -1;
    const val = this.map.get(key)!;
    this.map.delete(key);
    this.map.set(key, val);
    return val;
  }

  put(key: number, value: number): void {
    if (this.map.has(key)) this.map.delete(key);
    this.map.set(key, value);
    if (this.map.size > this.capacity) {
      this.map.delete(this.map.keys().next().value as number);
    }
  }
}
// ------------------------------- solution end ---------------------------------

console.log(`Input:  LRUCache(2), put(1,1), put(2,2), get(1), put(3,3), get(2), put(4,4), get(1), get(3), get(4)`);
const cache = new LRUCache(2);
cache.put(1, 1);
cache.put(2, 2);
const a = cache.get(1);
cache.put(3, 3);
const b = cache.get(2);
cache.put(4, 4);
const c = cache.get(1);
const d = cache.get(3);
const e = cache.get(4);
console.log(`Output: [${a}, ${b}, ${c}, ${d}, ${e}]`);
