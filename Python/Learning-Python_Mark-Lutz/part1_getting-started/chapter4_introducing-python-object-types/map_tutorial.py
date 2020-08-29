M = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
print(list(map(sum, M)))

#Creating a dict using this
sum_dict = [[i, sum(row)] for i, row in enumerate(M)]
print(sum_dict)