// ------------------------------- solution begin -------------------------------
class WordsFrequency {
  private freq = new Map<string, number>();

  constructor(book: string[]) {
    for (const w of book) this.freq.set(w, (this.freq.get(w) ?? 0) + 1);
  }

  get(word: string): number {
    return this.freq.get(word) ?? 0;
  }
}
// ------------------------------- solution end ---------------------------------

const book = ['i', 'have', 'an', 'apple', 'he', 'have', 'a', 'pen'];
console.log(`Input:  book = [i, have, an, apple, he, have, a, pen]`);
const obj = new WordsFrequency(book);
console.log(`Output: [${obj.get('you')}, ${obj.get('have')}, ${obj.get('an')}, ${obj.get('apple')}, ${obj.get('pen')}]`);
