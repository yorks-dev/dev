import itertools

input_list = [5, 6, 2, 10, 15, 20, 5, 2, 1, 3]

# xyz = [i for i in input_list if i % 5 == 0]
# print(xyz) 

def div_true(num):
    if num % 5 == 0:
        return True
    else:
        return False

xyz = [i for i in input_list if div_true(i) == True]    # Its a list
print(xyz)

xyz = (i for i in input_list if div_true(i) == True)    # Its a generator
print(xyz)

[print(i) for i in xyz]  # short one-liner for loop

xyz = (((i, ii) for ii in range(10)) for i in range(10))
                #Creates a generator inside generator and stores the object stream

for i in xyz:
    for ii in i:
        print(ii)

# Beauty of generators
xyz = (print(i) for i in range(5))

for i in xyz:   # here as we iterate over xyz and store in i , the print(i) is executed 
    pass        

for i in xyz:   # This wont print anything, the reason is that generators are creating iterators
    i

xyz = itertools.cycle((i for i in range(5))) #Thats why we can do this

for i in xyz:
    print(i)

