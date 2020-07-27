
game = "I wanna play a game"
print(id(game))


def game_board():
    global game
    print(id(game))
    game = "A game"
    print(id(game))


game_board()
print(game)
