from collections import deque

# ------------------------------- solution begin -------------------------------


class AnimalShelf:
    def __init__(self):
        self.cats = deque()
        self.dogs = deque()
        self.order = 0

    def enqueue(self, animal) -> None:
        if animal[1] == 0:
            self.cats.append((animal[0], self.order))
        else:
            self.dogs.append((animal[0], self.order))
        self.order += 1

    def dequeueAny(self):
        if not self.cats and not self.dogs:
            return [-1, -1]
        if not self.dogs or (self.cats and self.cats[0][1] < self.dogs[0][1]):
            num, _ = self.cats.popleft()
            return [num, 0]
        num, _ = self.dogs.popleft()
        return [num, 1]

    def dequeueDog(self):
        if not self.dogs:
            return [-1, -1]
        num, _ = self.dogs.popleft()
        return [num, 1]

    def dequeueCat(self):
        if not self.cats:
            return [-1, -1]
        num, _ = self.cats.popleft()
        return [num, 0]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print('Input:  ["AnimalShelf", "enqueue", "enqueue", "enqueue", "dequeueDog", "dequeueCat", "dequeueAny"]')
    obj = AnimalShelf()
    obj.enqueue([0, 0])
    obj.enqueue([1, 0])
    obj.enqueue([2, 1])
    r1 = obj.dequeueDog()
    r2 = obj.dequeueCat()
    r3 = obj.dequeueAny()
    print("Output: [null, null, null, null, {}, {}, {}]".format(r1, r2, r3))
