// ------------------------------- solution begin -------------------------------
const findLadders = (beginWord: string, endWord: string, wordList: string[]): string[] => {
  const words = [beginWord, ...wordList];
  const n = words.length;
  const endIdx = words.indexOf(endWord);
  if (endIdx === -1) return [];
  const diffOne = (a: string, b: string): boolean => {
    let diff = 0;
    for (let i = 0; i < a.length; i++) if (a[i] !== b[i]) diff++;
    return diff === 1;
  };
  const dist: number[] = new Array(n).fill(-1);
  const prev: number[] = new Array(n).fill(-1);
  const queue: number[] = [0];
  dist[0] = 0;
  let found = -1;
  for (let head = 0; head < queue.length; head++) {
    const u = queue[head];
    if (u === endIdx) {
      found = u;
      break;
    }
    for (let v = 0; v < n; v++) {
      if (dist[v] === -1 && diffOne(words[u], words[v])) {
        dist[v] = dist[u] + 1;
        prev[v] = u;
        queue.push(v);
      }
    }
  }
  if (found === -1) return [];
  const res: string[] = [];
  for (let cur = found; cur !== -1; cur = prev[cur]) res.push(words[cur]);
  res.reverse();
  return res;
};
// ------------------------------- solution end ---------------------------------

const wordList = ['hot', 'dot', 'dog', 'lot', 'log', 'cog'];
console.log(`Input:  beginWord = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log","cog"]`);
console.log(`Output: ${JSON.stringify(findLadders('hit', 'cog', wordList))}`);
