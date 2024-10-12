import sys


class Stack:
    def __init__(self):
        self._items = []

    def push(self, item):
        self._items.append(item)

    def pop(self):
        return self._items.pop()

    def __len__(self):
        return len(self._items)

    def print(self):
        print(self._items)


class NumericStack(Stack):  ## Inheriting THe Stack class
    def __init__(self):
        super().__init__()

    def push(self, item):
        try:
            super().push(int(item))
        except:
            sys.exit()


def main(items):
    stack1 = Stack()
    for item in items:
        stack1.push(item)
    stack1.print()

    stack2 = NumericStack()
    for item in items:
        stack2.push(item)
    stack2.print()


if __name__ == "__main__":
    if len(sys.argv) <= 2:
        raise RuntimeError("ERROR: RUN using:  python1_basic_oop_structure.py [items,]")
    push_items = sys.argv[1:]
    main(push_items)
