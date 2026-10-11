# ------------------------------- solution begin -------------------------------


class MinStack:
    def __init__(self):
        self.data = []
        self.mins = []

    def push(self, x: int) -> None:
        self.data.append(x)
        self.mins.append(x if not self.mins else min(x, self.mins[-1]))

    def pop(self) -> None:
        self.data.pop()
        self.mins.pop()

    def top(self) -> int:
        return self.data[-1]

    def getMin(self) -> int:
        return self.mins[-1]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print('Input:  ["MinStack", "push", "push", "push", "getMin", "pop", "top", "getMin"]')
    obj = MinStack()
    obj.push(-2)
    obj.push(0)
    obj.push(-3)
    a = obj.getMin()
    obj.pop()
    b = obj.top()
    c = obj.getMin()
    print("Output: [null, null, null, null, {}, null, {}, {}]".format(a, b, c))
