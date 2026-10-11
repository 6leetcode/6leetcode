# ------------------------------- solution begin -------------------------------


class Solution:
    def simplifyPath(self, path: str) -> str:
        st = []
        for tok in path.split("/"):
            if tok == "" or tok == ".":
                continue
            if tok == "..":
                if st:
                    st.pop()
            else:
                st.append(tok)
        return "/" + "/".join(st)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format("/a/./b/../../c/"))
    print("Output: {}".format(Solution().simplifyPath("/a/./b/../../c/")))
