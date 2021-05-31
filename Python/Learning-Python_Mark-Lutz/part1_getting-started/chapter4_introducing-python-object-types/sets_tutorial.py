X = set('spam')
Y = {'h', 'a', 'm'}

a = X, Y
print(a)

b = X & Y
print(b)

c = X | Y
print(c)

d = X - Y
print(d)

print(X > Y)

set1 = {1, 2, 3, 4, 5}
set2 = {4, 5}
print("Set 2 is a subset of Set 1 : ", set1 > set2 )

# Filter dublicates
string = "hello"
one_instance_string = "".join(list(set(string)))
print(one_instance_string)