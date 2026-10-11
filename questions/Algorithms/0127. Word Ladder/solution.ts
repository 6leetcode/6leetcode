// ------------------------------- solution begin -------------------------------
const ladderLength = (beginWord: string, endWord: string, wordList: string[]): number => {
  const dict = new Set<string>(wordList);
  if (!dict.has(endWord)) return 0;

  let queue: string[] = [beginWord];
  let level = 1;
  const base = 'a'.charCodeAt(0);

  while (queue.length > 0) {
    const size = queue.length;
    const next: string[] = [];
    for (let i = 0; i < size; i++) {
      const word = queue[i];
      if (word === endWord) return level;
      for (let j = 0; j < word.length; j++) {
        for (let k = 0; k < 26; k++) {
          const c = String.fromCharCode(base + k);
          if (c === word[j]) continue;
          const cand = word.slice(0, j) + c + word.slice(j + 1);
          if (dict.has(cand)) {
            dict.delete(cand);
            next.push(cand);
          }
        }
      }
    }
    queue = next;
    level++;
  }

  return 0;
};
// ------------------------------- solution end ---------------------------------

const showWords = (list: string[]): string => "[" + list.map((w) => `"${w}"`).join(", ") + "]";

const list1 = ["hot", "dot", "dog", "lot", "log", "cog"];
const list2 = ["hot", "dot", "dog", "lot", "log"];
const list3 = ["hot", "dog", "dot"];

console.log(`Input:  beginWord = "hit", endWord = "cog", wordList = ${showWords(list1)}`);
console.log(`Output: ${ladderLength("hit", "cog", list1)}`);

console.log(`Input:  beginWord = "hit", endWord = "cog", wordList = ${showWords(list2)}`);
console.log(`Output: ${ladderLength("hit", "cog", list2)}`);

console.log(`Input:  beginWord = "hot", endWord = "dog", wordList = ${showWords(list3)}`);
console.log(`Output: ${ladderLength("hot", "dog", list3)}`);
