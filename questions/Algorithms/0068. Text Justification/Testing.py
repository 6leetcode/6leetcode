from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def fullJustify(self, words: List[str], maxWidth: int) -> List[str]:
        res = []
        i, n = 0, len(words)
        while i < n:
            j, length = i, 0
            while j < n and length + len(words[j]) + (j - i) <= maxWidth:
                length += len(words[j])
                j += 1
            count = j - i
            if j == n or count == 1:
                line = " ".join(words[i:j])
                line += " " * (maxWidth - len(line))
            else:
                total = sum(len(w) for w in words[i:j])
                gaps = count - 1
                base, extra = divmod(maxWidth - total, gaps)
                parts = []
                for k in range(i, j):
                    parts.append(words[k])
                    if k != j - 1:
                        parts.append(" " * (base + (1 if k - i < extra else 0)))
                line = "".join(parts)
            res.append(line)
            i = j
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    words = ["This", "is", "an", "example", "of", "text", "justification."]
    print("Input:  {} {}".format(words, 16))
    print("Output: {}".format(Solution().fullJustify(words, 16)))
