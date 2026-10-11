from collections import defaultdict
from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def computeSimilarities(self, docs: List[List[int]]) -> List[str]:
        word_docs = defaultdict(list)
        for i, doc in enumerate(docs):
            for w in doc:
                word_docs[w].append(i)
        inter = defaultdict(int)
        for ids in word_docs.values():
            for a in range(len(ids)):
                for b in range(a + 1, len(ids)):
                    inter[(ids[a], ids[b])] += 1
        res = []
        for (i, j) in sorted(inter):
            c = inter[(i, j)]
            uni = len(docs[i]) + len(docs[j]) - c
            res.append("{},{}: {:.4f}".format(i, j, c / uni))
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    docs = [[14, 15, 100, 9, 3], [32, 1, 9, 3, 5], [15, 29, 2, 6, 8, 7], [7, 10]]
    print("Input:  [[14,15,100,9,3],[32,1,9,3,5],[15,29,2,6,8,7],[7,10]]")
    print("Output: {}".format(Solution().computeSimilarities(docs)))
