"""def addition(x, y):
    return x + y
z = addition("Hey", " there")
print(z)"""

game = [['O', 'O', 'O'],
        ['O', 'O', 'O'],
        ['O', 'O', 'O']]


def game_board(player_move='O', row=0, column=0, just_display=False):
    print("    a b c")
    print("  --------")
    if not just_display:
        game[row][column] = player_move
    for count, row in enumerate(game, start=0):
        print(count, end=" | ")
        for value in row:
            print(value, sep=" ", end=" ")
        print()


game_board(just_display=True)
game_board(player_move='x', column=1, row=0)
