from datetime import date
import math

d = date(2022, 11, 7)
a = repr(d)
print(f"date is : {d!r}")


items = {"number": 42, "text": "Hello World"}

items["abs"] = abs
items["math"] = math
items["error"] = ValueError

nums = [1, 2, 3, 4]
items["append"] = nums.append

a = items["abs"](-11)
b = items["math"].sqrt(4)

try:
    x = int("x")
except items["error"] as e:
    print("Couldn't convert")

items["append"](100)


