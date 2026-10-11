from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def multiSearch(self, big: str, smalls: List[str]) -> List[List[int]]:
        res = []
        for s in smalls:
            pos = []
            if s:
                start = 0
                while True:
                    idx = big.find(s, start)
                    if idx == -1:
                        break
                    pos.append(idx)
                    start = idx + 1
            res.append(pos)
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    big = "mississippi"
    smalls = ["is", "ppi", "hi", "sis", "i", "ssippi"]
    print('Input:  big = "mississippi", smalls = ["is","ppi","hi","sis","i","ssippi"]')
    print("Output: {}".format(Solution().multiSearch(big, smalls)))
