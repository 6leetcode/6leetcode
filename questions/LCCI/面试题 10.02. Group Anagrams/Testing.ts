// ------------------------------- solution begin -------------------------------
const groupAnagrams = (strs: string[]): string[][] => {
  const groups = new Map<string, string[]>();
  const order: string[] = [];
  for (const s of strs) {
    const key = s.split('').sort().join('');
    if (!groups.has(key)) {
      groups.set(key, []);
      order.push(key);
    }
    groups.get(key)!.push(s);
  }
  return order.map((k) => groups.get(k)!);
};
// ------------------------------- solution end ---------------------------------

const input = ['eat', 'tea', 'tan', 'ate', 'nat', 'bat'];
console.log(`Input:  ["eat", "tea", "tan", "ate", "nat", "bat"]`);
console.log(`Output: ${JSON.stringify(groupAnagrams(input))}`);
