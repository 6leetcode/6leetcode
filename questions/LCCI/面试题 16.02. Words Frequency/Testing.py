from collections import Counter
from typing import List

# ------------------------------- solution begin -------------------------------


class WordsFrequency:
    def __init__(self, book: List[str]):
        self.freq = Counter(book)

    def get(self, word: str) -> int:
        return self.freq.get(word, 0)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    book = ["i", "have", "an", "apple", "he", "have", "a", "pen"]
    print("Input:  book = [i, have, an, apple, he, have, a, pen]")
    obj = WordsFrequency(book)
    print("Output: [{}, {}, {}, {}, {}]".format(
        obj.get("you"), obj.get("have"), obj.get("an"), obj.get("apple"), obj.get("pen")))
