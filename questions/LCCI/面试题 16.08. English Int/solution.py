# ------------------------------- solution begin -------------------------------

ones = ["", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
        "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen",
        "Seventeen", "Eighteen", "Nineteen"]
tens = ["", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"]
thousands = ["", "Thousand", "Million", "Billion"]


class Solution:
    def numberToWords(self, num: int) -> str:
        if num == 0:
            return "Zero"
        out = []
        if num < 0:
            out.append("Negative")
            num = -num

        def below1000(n: int):
            if n >= 100:
                out.append(ones[n // 100])
                out.append("Hundred")
                n %= 100
            if n >= 20:
                out.append(tens[n // 10])
                n %= 10
            if n > 0:
                out.append(ones[n])

        chunks = []
        tmp = num
        while tmp > 0:
            chunks.append(tmp % 1000)
            tmp //= 1000
        for i in range(len(chunks) - 1, -1, -1):
            if chunks[i] == 0:
                continue
            below1000(chunks[i])
            if thousands[i]:
                out.append(thousands[i])
        return " ".join(out)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format(12345))
    print('Output: "{}"'.format(Solution().numberToWords(12345)))
