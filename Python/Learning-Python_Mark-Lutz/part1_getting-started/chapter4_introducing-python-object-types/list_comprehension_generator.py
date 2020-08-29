M = [[1, 2, 3],
	 [4, 5, 6],
	 [7, 8, 9]]

#Generate Generator Stream
sum_stream = (sum(row) for row in M)
for i in range(len(M)):
	print(next(sum_stream))

