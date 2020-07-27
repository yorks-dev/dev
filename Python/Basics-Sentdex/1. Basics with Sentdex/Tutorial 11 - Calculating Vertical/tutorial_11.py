
current_game = [['x', 'x', 'x'],
                ['_', 'x', '_'],
                ['_', 'x', '_']]

for col in range(0, len(current_game[0])):
    vertical_check = []
    for row in range(0, len(current_game)):
        vertical_check.append(current_game[row][col])
    print(vertical_check)
    if vertical_check.count(vertical_check[0]) == len(vertical_check) and vertical_check[0] != '-':
        print("Winner !!")
        break


