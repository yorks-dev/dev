# iterable : Something that we can iterate over.
# iterator : a special object with a next() method

import itertools
x = [1, 2, 3, 4]  # ... Iterable not an iterator. So we cant use the next()

# for i in x:
#     print(i)  

n = itertools.cycle(x)  # ... Iterator .. also an iterable ..
                        # basically a infinite cycle of (1-->4,1 --> 4 ...)
 
# for i in n:
#     print(i)    #Prints an infinite loop 

'''
print(next(n))
print(next(n))
print(next(n))
print(next(n))
print(next(n))
print(next(n))
print(next(n))  # Prints the value in cycles ...
print(next(n))
'''

y = iter(x)
next(y)  # One step iterated
for i in y:
    print(i)  #Should print 2 3 4

# Now the iterator y is exhausted 

for i in y:
    print(i)
for i in y:
    print(i)   # These will not producre any output as the iterator is exhausted


player_num = itertools.cycle([[1,'X'], [2,'O']])

print(next(player_num)[0])

