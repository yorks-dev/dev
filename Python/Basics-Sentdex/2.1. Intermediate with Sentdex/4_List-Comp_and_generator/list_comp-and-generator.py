xyz = [i for i in range(50)]       # This xyz list is stored in memory 
print('Done !!')

xyz = (i for i in range(50))  # But this is not stored in the memory, 
                                   #this gives us a stream of num stored as an object
print(xyz)
#   now what can we do with the object, we can iterate over it. Its an iterable
for i in xyz:
    print(i)