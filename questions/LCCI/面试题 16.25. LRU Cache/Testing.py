from collections import OrderedDict

# ------------------------------- solution begin -------------------------------


class LRUCache:
    def __init__(self, capacity: int):
        self.capacity = capacity
        self.map = OrderedDict()

    def get(self, key: int) -> int:
        if key not in self.map:
            return -1
        self.map.move_to_end(key)
        return self.map[key]

    def put(self, key: int, value: int) -> None:
        if key in self.map:
            self.map.move_to_end(key)
        self.map[key] = value
        if len(self.map) > self.capacity:
            self.map.popitem(last=False)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  LRUCache(2), put(1,1), put(2,2), get(1), put(3,3), get(2), put(4,4), get(1), get(3), get(4)")
    cache = LRUCache(2)
    cache.put(1, 1)
    cache.put(2, 2)
    a = cache.get(1)
    cache.put(3, 3)
    b = cache.get(2)
    cache.put(4, 4)
    c = cache.get(1)
    d = cache.get(3)
    e = cache.get(4)
    print("Output: [{}, {}, {}, {}, {}]".format(a, b, c, d, e))
