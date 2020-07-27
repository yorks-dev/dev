game = [['O', 'O', 'O'],
        ['O', 'O', 'O'],
        ['O', 'O', 'O']]


def game_board(game_map, player_move='O', row=0, column=0, just_display=False):
    print("    a b c")
    print("  --------")
    if not just_display:
        game_map[row][column] = player_move
    for count, row in enumerate(game_map, start=0):
        print(count, end=" | ")
        for value in row:
            print(value, sep=" ", end=" ")
        print()
    return game_map


game = game_board(game, player_move='x', column=1, row=0, just_display=False)
