from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def findLadders(self, beginWord: str, endWord: str, wordList: List[str]) -> List[str]:
        words = [beginWord] + list(wordList)
        n = len(words)
        if endWord not in words:
            return []

        def diff_one(a: str, b: str) -> bool:
            return sum(1 for x, y in zip(a, b) if x != y) == 1

        end_idx = words.index(endWord)
        dist = [-1] * n
        prev = [-1] * n
        queue = [0]
        dist[0] = 0
        found = -1
        head = 0
        while head < len(queue):
            u = queue[head]
            head += 1
            if u == end_idx:
                found = u
                break
            for v in range(n):
                if dist[v] == -1 and diff_one(words[u], words[v]):
                    dist[v] = dist[u] + 1
                    prev[v] = u
                    queue.append(v)
        if found == -1:
            return []
        res = []
        cur = found
        while cur != -1:
            res.append(words[cur])
            cur = prev[cur]
        res.reverse()
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    wordList = ["hot", "dot", "dog", "lot", "log", "cog"]
    print('Input:  beginWord = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log","cog"]')
    print("Output: {}".format(Solution().findLadders("hit", "cog", wordList)))
