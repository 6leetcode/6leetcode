from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def trulyMostPopular(self, names: List[str], synonyms: List[str]) -> List[str]:
        parent = {}

        def find(x: str) -> str:
            parent.setdefault(x, x)
            if parent[x] != x:
                parent[x] = find(parent[x])
            return parent[x]

        def union(a: str, b: str):
            ra, rb = find(a), find(b)
            if ra == rb:
                return
            if ra < rb:
                parent[rb] = ra
            else:
                parent[ra] = rb

        freq = {}
        for s in names:
            pos = s.index("(")
            name = s[:pos]
            cnt = int(s[pos + 1:-1])
            freq[name] = cnt
            find(name)

        for s in synonyms:
            a, b = s[1:-1].split(",")
            union(a, b)

        agg = {}
        for name, cnt in freq.items():
            r = find(name)
            agg[r] = agg.get(r, 0) + cnt
        return ["{}({})".format(k, v) for k, v in sorted(agg.items())]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    names = ["John(15)", "Jon(12)", "Chris(13)", "Kris(4)", "Christopher(19)"]
    synonyms = ["(Jon,John)", "(John,Johnny)", "(Chris,Kris)", "(Chris,Christopher)"]
    print("Input:  names = [John(15), Jon(12), Chris(13), Kris(4), Christopher(19)], synonyms = [(Jon,John),(John,Johnny),(Chris,Kris),(Chris,Christopher)]")
    print("Output: {}".format(Solution().trulyMostPopular(names, synonyms)))
