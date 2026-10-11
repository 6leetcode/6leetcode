# ------------------------------- solution begin -------------------------------


class MyQueue:
    def __init__(self):
        self.in_stack = []
        self.out_stack = []

    def push(self, x: int) -> None:
        self.in_stack.append(x)

    def _transfer(self):
        if not self.out_stack:
            while self.in_stack:
                self.out_stack.append(self.in_stack.pop())

    def pop(self) -> int:
        self._transfer()
        return self.out_stack.pop()

    def peek(self) -> int:
        self._transfer()
        return self.out_stack[-1]

    def empty(self) -> bool:
        return not self.in_stack and not self.out_stack

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print('Input:  ["MyQueue", "push", "push", "peek", "pop", "empty"]')
    obj = MyQueue()
    obj.push(1)
    obj.push(2)
    p = obj.peek()
    q = obj.pop()
    e = obj.empty()
    print("Output: [null, null, null, {}, {}, {}]".format(p, q, str(e).lower()))
