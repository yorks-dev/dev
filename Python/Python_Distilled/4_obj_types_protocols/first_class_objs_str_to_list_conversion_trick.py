LINE = "ACME,100,490.10"

types = [str, int, float]
list_line = LINE.split(",")

my_list = [ty(item) for ty, item in zip(types, list_line)]

print(my_list)
