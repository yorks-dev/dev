def my_func(a, b):
	a = int(a)
	b = int(b)
	return(a+b)

x =  map(my_func, ('1', '2', '3'), ('1', '2', '3'))
print(list(x))