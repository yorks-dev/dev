roll = [1, 2, 3]
names = ['Ayush', 'Joe', 'Rob']

pair = zip(roll, names)
print(dict(pair))

bob2 = dict(zip(['names', 'job', 'age'], ['Bob', 'dev', 40]))
print(bob2)

# Nested dictionaties
record = {
		  'emp1' : 
			{ 'name' : {'first' : 'Ayush', 'last' : 'Dutta' }, 
		      'job' : 'Software Dev',
		      'age' : 17 
			}
		 }
dict1 = record['emp1']['name']
print(dict1)
full_name = " ".join([dict1[i] for i in dict1])  # Print the Full Name
print(full_name)
