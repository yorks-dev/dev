# Create a Tic tac Toe game
"""
1. Visualize the game somehow
2. Allow players to enter moves
3. Make sure moves are valid and handle if not.
4. Determine if there's a winner.
"""

game = [['O', 'O', 'O'],
        ['O', 'O', 'O'],
        ['O', 'O', 'O']]

print("    a b c")
print("  --------")

for count, row in enumerate(game, start=0):
    print(count, end=" | ")
    for value in row:
        print(value, sep=" ", end=" ")
    print()

