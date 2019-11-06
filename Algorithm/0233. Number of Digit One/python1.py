class Solution:
  def countDigitOne(self, n: int) -> int:
    r = 0
    i = 1
    while i < n+1:
      a = int(n/i)
      b = n % i
      r += int((a+8)/10)*i
      if a % 10 == 1:
          r += (b+1)
      i *= 10
    return r

if __name__ == "__main__":
  solution = Solution()
  n = 13
  print("Input:  {}".format(n))
  print("Output: {}".format(solution.countDigitOne(n)))
