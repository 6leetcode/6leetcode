# ------------------------------- solution begin -------------------------------


class TripleInOne:
    def __init__(self, stackSize: int):
        self.size = stackSize
        self.arr = [0] * (3 * stackSize)
        self.top = [0, 0, 0]

    def push(self, stackNum: int, value: int) -> None:
        if self.top[stackNum] < self.size:
            self.arr[stackNum * self.size + self.top[stackNum]] = value
            self.top[stackNum] += 1

    def pop(self, stackNum: int) -> int:
        if self.top[stackNum] == 0:
            return -1
        self.top[stackNum] -= 1
        return self.arr[stackNum * self.size + self.top[stackNum]]

    def peek(self, stackNum: int) -> int:
        if self.top[stackNum] == 0:
            return -1
        return self.arr[stackNum * self.size + self.top[stackNum] - 1]

    def isEmpty(self, stackNum: int) -> bool:
        return self.top[stackNum] == 0

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print('Input:  ["TripleInOne", "push", "push", "pop", "pop", "pop", "isEmpty"]')
    obj = TripleInOne(1)
    obj.push(0, 1)
    obj.push(0, 2)
    print("Output: [null, null, null, {}, {}, {}, {}]".format(
        obj.pop(0), obj.pop(0), obj.pop(0), str(obj.isEmpty(0)).lower()))
