index = [1, 2, 3, 4, 5]
name = ['Sam', 'Rob', 'Dan', 'Celine', 'Joana']

pair = zip(index, name)
print(pair)  # returns a zip object (iterator)


dict_pair = dict(pair)
print(dict_pair)