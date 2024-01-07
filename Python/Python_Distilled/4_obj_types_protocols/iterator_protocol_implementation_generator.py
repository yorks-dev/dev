from ast import alias


class FRange:
    def __init__(self, start, stop, step) -> None:
        self.start = start
        self.stop = stop
        self.step = step

    def __iter__(self):
        x = self.start
        while x < self.stop:
            yield x  # adding items to the generator
            x += self.step

    def __reversed__(self):
        x = self.stop
        while x > self.start:
            yield x  # adding items to the generator
            x -= self.step


# Example use:
nums = FRange(0.0, 1.0, 0.1)
print(type(nums))

for i in reversed(nums):
    print(f"{i:0.1f}")
