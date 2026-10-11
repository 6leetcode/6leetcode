# ------------------------------- solution begin -------------------------------


class StackOfPlates:
    def __init__(self, cap: int):
        self.cap = cap
        self.stacks = []

    def push(self, val: int) -> None:
        if self.cap == 0:
            return
        if not self.stacks or len(self.stacks[-1]) == self.cap:
            self.stacks.append([])
        self.stacks[-1].append(val)

    def pop(self) -> int:
        if not self.stacks:
            return -1
        v = self.stacks[-1].pop()
        if not self.stacks[-1]:
            self.stacks.pop()
        return v

    def popAt(self, index: int) -> int:
        if index < 0 or index >= len(self.stacks):
            return -1
        v = self.stacks[index].pop()
        if not self.stacks[index]:
            self.stacks.pop(index)
        return v

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print('Input:  ["StackOfPlates", "push", "push", "push", "popAt", "popAt", "popAt"]')
    obj = StackOfPlates(2)
    obj.push(1)
    obj.push(2)
    obj.push(3)
    print("Output: [null, null, null, null, {}, {}, {}]".format(obj.popAt(0), obj.popAt(0), obj.popAt(0)))
