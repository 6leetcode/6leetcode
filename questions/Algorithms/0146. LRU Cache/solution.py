from collections import OrderedDict

# ------------------------------- solution begin -------------------------------


class LRUCache:
    def __init__(self, capacity: int):
        self.capacity = capacity
        self.cache = OrderedDict()

    def get(self, key: int) -> int:
        if key not in self.cache:
            return -1
        self.cache.move_to_end(key)
        return self.cache[key]

    def put(self, key: int, value: int) -> None:
        if key in self.cache:
            self.cache.move_to_end(key)
        self.cache[key] = value
        if len(self.cache) > self.capacity:
            self.cache.popitem(last=False)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    cache = LRUCache(2)
    cache.put(1, 1)
    cache.put(2, 2)
    a1 = cache.get(1)
    cache.put(3, 3)
    a2 = cache.get(2)
    cache.put(4, 4)
    a3 = cache.get(1)
    a4 = cache.get(3)
    a5 = cache.get(4)
    print(
        'Input:  ["LRUCache","put","put","get","put","get","put","get","get","get"] [[2],[1,1],[2,2],[1],[3,3],[2],[4,4],[1],[3],[4]]'
    )
    print("Output: [null, null, null, {}, null, {}, null, {}, {}, {}]".format(a1, a2, a3, a4, a5))

    cache2 = LRUCache(1)
    cache2.put(2, 1)
    b1 = cache2.get(2)
    cache2.put(3, 2)
    b2 = cache2.get(2)
    b3 = cache2.get(3)
    print('Input:  ["LRUCache","put","get","put","get","get"] [[1],[2,1],[2],[3,2],[2],[3]]')
    print("Output: [null, null, {}, null, {}, {}]".format(b1, b2, b3))
