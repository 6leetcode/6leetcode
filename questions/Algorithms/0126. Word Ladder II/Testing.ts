// ------------------------------- solution begin -------------------------------
const findLadders = (beginWord: string, endWord: string, wordList: string[]): string[][] => {
  const res: string[][] = [];
  const dict = new Set<string>(wordList);
  if (!dict.has(endWord)) return res;

  const parents = new Map<string, string[]>();
  const visited = new Set<string>([beginWord]);
  let level: string[] = [beginWord];
  let found = false;
  const base = 'a'.charCodeAt(0);

  while (level.length > 0 && !found) {
    const next: string[] = [];
    const nextSet = new Set<string>();
    for (const word of level) {
      for (let j = 0; j < word.length; j++) {
        for (let k = 0; k < 26; k++) {
          const c = String.fromCharCode(base + k);
          if (c === word[j]) continue;
          const cand = word.slice(0, j) + c + word.slice(j + 1);
          if (dict.has(cand) && !visited.has(cand)) {
            if (!nextSet.has(cand)) {
              nextSet.add(cand);
              next.push(cand);
            }
            if (!parents.has(cand)) parents.set(cand, []);
            parents.get(cand)!.push(word);
            if (cand === endWord) found = true;
          }
        }
      }
    }
    for (const w of next) visited.add(w);
    level = next;
  }

  if (!found) return res;

  const dfs = (word: string, path: string[]): void => {
    if (word === beginWord) {
      res.push([...path].reverse());
      return;
    }
    for (const p of parents.get(word) || []) {
      dfs(p, [...path, p]);
    }
  };
  dfs(endWord, [endWord]);

  return res;
};
// ------------------------------- solution end ---------------------------------

const showWords = (list: string[]): string => "[" + list.map((w) => `"${w}"`).join(", ") + "]";
const showPaths = (paths: string[][]): string => "[" + paths.map(showWords).join(", ") + "]";

const list1 = ["hot", "dot", "dog", "lot", "log", "cog"];
const list2 = ["hot", "dot", "dog", "lot", "log"];

console.log(`Input:  beginWord = "hit", endWord = "cog", wordList = ${showWords(list1)}`);
console.log(`Output: ${showPaths(findLadders("hit", "cog", list1))}`);

console.log(`Input:  beginWord = "hit", endWord = "cog", wordList = ${showWords(list2)}`);
console.log(`Output: ${showPaths(findLadders("hit", "cog", list2))}`);
