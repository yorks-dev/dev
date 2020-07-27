example = ['left', 'right', 'up', 'bottom']

# for i in enumerate(example):    # returns an iterable (tuple) -> (0, 'left')
#     print(i)

for i, j in enumerate(example):
    print(i, j)
    
new_dict = dict(enumerate(example))
print(new_dict)
