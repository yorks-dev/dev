my_list = [1, 2, 3, 4, 5]

_iter = my_list.__iter__()

while True:
    try:
        x = _iter.__next__()
        print(x)
    except StopIteration:
        print("Iteration finished")
        break

## If we iter over _iter again it wont work because iteration on the object already finished

_iter_rev = my_list.__reversed__()
while True:
    try:
        x = _iter_rev.__next__()
        print(x)
    except StopIteration:
        print("Iteration finished")
        break
