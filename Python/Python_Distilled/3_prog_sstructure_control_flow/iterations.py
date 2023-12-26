# enumerate
values = [1, 2, 3, 4, 5]

for index, i in enumerate(values, start=100):
    print((index, i))

# zip function
x = [1, 2, 3, 4, 5]
y = ["a", "b", "c", "d", "e"]

for i in (zip_x_y := zip(x, y)):
    print(i)

# for else statement
# check if number div by 5 exists
values = [1, 2, 3, 4, 6, 7, 8, 9, 6, 12, 18, 19]

for i in values:
    if i % 5 == 0:
        print("Number div by 5 found")
        break

else:
    print("No number div by 5")
