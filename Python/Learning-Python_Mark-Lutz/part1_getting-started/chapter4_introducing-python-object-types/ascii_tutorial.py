#string = "ayush"

#for i in string:
#	print(ord(i))

def remove_dublicates(string):
	ord_list = {ord(i) for i in string}   # Sets removes dublicates
	char_list = list(map(chr, ord_list))
	print(char_list)

if __name__ == "__main__":
	remove_dublicates("hello")