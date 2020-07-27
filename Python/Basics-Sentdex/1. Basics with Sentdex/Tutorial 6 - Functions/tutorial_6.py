
game = [['O', 'O', 'O'],
        ['O', 'O', 'O'],
        ['O', 'O', 'O']]


def game_board():
    print("    a b c")
    print("  --------")
    for count, row in enumerate(game, start=0):
        print(count, end=" | ")
        for value in row:
            print(value, sep=" ", end=" ")
        print()


game_board()

game[0][1] = "x"  # user plays a game

game_board()


