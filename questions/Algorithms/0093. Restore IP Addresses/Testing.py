from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def restoreIpAddresses(self, s: str) -> List[str]:
        n = len(s)
        ans = []
        segments = [0] * 4

        def dfs(seg_id: int, seg_start: int):
            if seg_id == 4:
                if seg_start == n:
                    ans.append(".".join(str(x) for x in segments))
                return
            if seg_start == n:
                return
            if s[seg_start] == "0":
                segments[seg_id] = 0
                dfs(seg_id + 1, seg_start + 1)
            addr = 0
            for seg_end in range(seg_start, n):
                addr = addr * 10 + int(s[seg_end])
                if 0 < addr <= 255:
                    segments[seg_id] = addr
                    dfs(seg_id + 1, seg_end + 1)
                else:
                    break

        dfs(0, 0)
        return ans

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format("25525511135"))
    print("Output: {}".format(Solution().restoreIpAddresses("25525511135")))
