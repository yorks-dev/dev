# import time

# start = time.time()
# for i in range(50):
#     print(i, end="")
# print()
# total_time = time.time() - start
# print(total_time)

# --> timeit runs the code actually 
import timeit



print(timeit.timeit('''
arr = []
for i in range(500):
    arr.append(i)
''', number=200))