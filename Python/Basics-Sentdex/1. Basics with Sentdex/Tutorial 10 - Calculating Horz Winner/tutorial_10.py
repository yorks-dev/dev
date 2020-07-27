
game = [['x', 'x', 'x'],
        ['_', 'x', '_'],
        ['_', 'x', '_']]


def win_horiz(current_game):
    flag = False
    for row in current_game:
        print(row)
        if row.count(row[0]) == len(row) and row[0] != '_':
            flag = True
    if flag:
        return 1
    else:
        return 0


# horiz_flag = int(win_horiz(game))
# if horiz_flag == 1:
#     print("You are the winner")

horiz_flag = int(win_horiz(game))
if horiz_flag == 1:
    print("You are a Winner")
a = "hello"
print(len(a))
