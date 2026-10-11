from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        groups = {}
        order = []
        for s in strs:
            key = "".join(sorted(s))
            if key not in groups:
                groups[key] = []
                order.append(key)
            groups[key].append(s)
        return [groups[key] for key in order]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    strs = ["eat", "tea", "tan", "ate", "nat", "bat"]
    print("Input:  {}".format(strs))
    print("Output: {}".format(Solution().groupAnagrams(strs)))
