// ------------------------------- solution begin -------------------------------
const findClosest = (words: string[], word1: string, word2: string): number => {
  let best = words.length;
  let p1 = -1;
  let p2 = -1;
  for (let i = 0; i < words.length; i++) {
    if (words[i] === word1) {
      p1 = i;
      if (p2 !== -1) best = Math.min(best, i - p2);
    } else if (words[i] === word2) {
      p2 = i;
      if (p1 !== -1) best = Math.min(best, i - p1);
    }
  }
  return best;
};
// ------------------------------- solution end ---------------------------------

const words = ['I', 'am', 'a', 'student', 'from', 'a', 'university', 'in', 'a', 'city'];
console.log(`Input:  words = [...], word1 = "a", word2 = "student"`);
console.log(`Output: ${findClosest(words, 'a', 'student')}`);
