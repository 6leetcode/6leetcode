import heapq

# ------------------------------- solution begin -------------------------------


class MedianFinder:
    def __init__(self):
        self.lower = []  # max-heap (negated)
        self.upper = []  # min-heap

    def addNum(self, num: int) -> None:
        heapq.heappush(self.lower, -num)
        heapq.heappush(self.upper, -heapq.heappop(self.lower))
        if len(self.lower) < len(self.upper):
            heapq.heappush(self.lower, -heapq.heappop(self.upper))

    def findMedian(self) -> float:
        if len(self.lower) > len(self.upper):
            return float(-self.lower[0])
        return (-self.lower[0] + self.upper[0]) / 2.0

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  addNum(1), addNum(2), findMedian(), addNum(3), findMedian()")
    obj = MedianFinder()
    obj.addNum(1)
    obj.addNum(2)
    a = obj.findMedian()
    obj.addNum(3)
    b = obj.findMedian()
    print("Output: [{}, {}]".format(a, b))
