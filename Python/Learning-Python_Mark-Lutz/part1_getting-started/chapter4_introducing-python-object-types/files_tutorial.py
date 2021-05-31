f = open('data.txt', 'w')   # opened in write mode. (Created a new file)
f.write('Hello\nWhats going in man ?\nAl good bro !!')
f.close()	#Close to flush the buffer to the disk.

f1 = open('data1.txt', 'a')
f1.write('New Line\n')
f1.close()

print("Reading the data1.txt file")
f2 = open('data1.txt', 'r')   #The 'r' is by default so is optional.
string = f2.read()			# Read entire file into a str
string_arr = string.split()
print(string_arr)

for line in open('data1.txt'): print(line)