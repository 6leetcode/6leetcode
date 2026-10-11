# ------------------------------- solution begin -------------------------------


class Solution:
    def replaceSpaces(self, S: str, length: int) -> str:
        return S[:length].replace(" ", "%20")

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print('Input:  "{}", {}'.format("Mr John Smith ", 13))
    print('Output: "{}"'.format(Solution().replaceSpaces("Mr John Smith ", 13)))
