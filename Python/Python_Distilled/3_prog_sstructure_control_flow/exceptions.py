import sys

try:
    file = open("./file.txt", "r", encoding="UTF-8")

except FileNotFoundError as e:
    print(f"Unable to open file : {e}")
    DATA = ""

else:
    DATA = file.read()
    print(DATA)
    file.close()

finally:
    print("Exited Successfully ")


# Exception Hierarchy
items = [1, 2, 3, 4, 5]
items2 = {"a": 1, "b": 2, "c": 3, "d": 4, "e": 5}

try:
    item = items[6]
    item2 = items2["f"]

except LookupError as e:
    print(e)


# Trying the SystemExit using afgv

if len(sys.argv) != 2:
    raise SystemExit("ERROR : Please enter filename in args")

filename = sys.argv[1]
print(f"Filename : {filename}")
