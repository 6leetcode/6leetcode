# ------------------------------- solution begin -------------------------------


class SortedStack:
    def __init__(self):
        self.data = []

    def push(self, val: int) -> None:
        tmp = []
        while self.data and self.data[-1] < val:
            tmp.append(self.data.pop())
        self.data.append(val)
        while tmp:
            self.data.append(tmp.pop())

    def pop(self) -> None:
        if self.data:
            self.data.pop()

    def peek(self) -> int:
        return self.data[-1] if self.data else -1

    def isEmpty(self) -> bool:
        return not self.data

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print('Input:  ["SortedStack", "push", "push", "peek", "pop", "peek"]')
    obj = SortedStack()
    obj.push(1)
    obj.push(2)
    a = obj.peek()
    obj.pop()
    b = obj.peek()
    print("Output: [null, null, null, {}, null, {}]".format(a, b))
