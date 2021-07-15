
my_map =  [['⬜️', '⬜️', '⬜️'],
           ['⬜️', '⬜️', '⬜️'],
           ['⬜️', '⬜️', '⬜️']]

while True:
    
    for i in my_map:
        print(i)

    choice = input("Enter 0 to exit, else enter location . eg 23 [rc] : ")
    if choice == 'N':
        break
    else:
        my_map[int(choice[1]) - 1][int(choice[0]) - 1] = 'X'
