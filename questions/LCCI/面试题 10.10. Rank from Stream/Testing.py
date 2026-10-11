import bisect

# ------------------------------- solution begin -------------------------------


class StreamRank:
    def __init__(self):
        self.data = []

    def track(self, x: int) -> None:
        bisect.insort(self.data, x)

    def getRankOfNumber(self, x: int) -> int:
        return bisect.bisect_right(self.data, x)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print('Input:  ["StreamRank", "getRankOfNumber", "track", "getRankOfNumber"], [[], [1], [0], [0]]')
    obj = StreamRank()
    a = obj.getRankOfNumber(1)
    obj.track(0)
    b = obj.getRankOfNumber(0)
    print("Output: [null, {}, null, {}]".format(a, b))
