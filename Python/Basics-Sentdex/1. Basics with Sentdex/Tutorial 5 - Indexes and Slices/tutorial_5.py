"""
l = [1, 2, 3, 4, 5]

print(l)
l[1] = 99
print(l)

"""
game = [['O', 'O', 'O'],
        ['O', 'O', 'O'],
        ['O', 'O', 'O']]

game[0][1] = "x"  # user plays a game

print("    a b c")
print("  --------")

# This is the repetitive part .. so we use functions next
for count, row in enumerate(game, start=0):
    print(count, end=" | ")
    for value in row:
        print(value, sep=" ", end=" ")
    print()