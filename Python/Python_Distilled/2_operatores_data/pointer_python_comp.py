a = [1, 2, 3]
b = a
a += [4, 5]


print(a)  # -> [1, 2, 3, 4, 5]
print(b)  # -> [1, 2, 3, 4, 5]


if b is a:
    print("b is same as a")

print(f"address of a : 0x{id(a)}, address of b : 0x{id(b)}")

print("123" < "02345")
