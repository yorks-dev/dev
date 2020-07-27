# names = ['Jef', 'Garry', 'Samantha', 'Joe']

# for name in names:
#     # print("Hello there, " + name)
#     print(' '.join(["hello there,", name]))  # Other way to do 
    
# print(','.join(names))  # should be used when we wanna join more than 2 string


import os

location_of_files = "/home/edward/Software Developement/Learning Python/1. Fundamentals/2.1. Intermediate with Sentdex/2_String-Concatination"
file_name = 'test_file.txt'


with open(os.path.join(location_of_files, file_name)) as f:
    print(f.read())
