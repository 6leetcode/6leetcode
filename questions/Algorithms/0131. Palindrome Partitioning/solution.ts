// ------------------------------- solution begin -------------------------------
const partition = (s: string): string[][] => {
  const res: string[][] = [];
  const path: string[] = [];

  const isPalindrome = (l: number, r: number): boolean => {
    while (l < r) {
      if (s[l++] !== s[r--]) return false;
    }
    return true;
  };

  const backtrack = (start: number): void => {
    if (start === s.length) {
      res.push([...path]);
      return;
    }
    for (let end = start; end < s.length; end++) {
      if (!isPalindrome(start, end)) continue;
      path.push(s.slice(start, end + 1));
      backtrack(end + 1);
      path.pop();
    }
  };

  backtrack(0);
  return res;
};
// ------------------------------- solution end ---------------------------------

for (const s of ['aab', 'a']) {
  console.log(`Input:  ${s}`);
  console.log(`Output: ${JSON.stringify(partition(s))}`);
}
