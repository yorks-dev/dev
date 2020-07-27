def win(current_game):
    
    # Horizontal
    # print(current_game)
    
    # for row in current_game:
    #     if row.count(row[0]) == len(row) and row[0] != '_':
    #          return (True, "-H")

    #Vertical    

    for col in range(0, len(current_game[0])):
        vertical_check = []
        for row in range(0, len(current_game)):
            vertical_check.append(current_game[row][col])
        print(vertical_check)
        if vertical_check.count(vertical_check[0]) == len(vertical_check) and vertical_check[0] != '_':
            print("Winner !!")
            return(True, "|V")


    # Diagonally

    # diag_check_forwd = [row[pos] for pos, row in enumerate(current_game)]
    # diag_check_backwd = [row[len(row) - 1 - pos] for pos, row in enumerate(current_game)]
        
    # if diag_check_backwd.count(diag_check_backwd[0]) == len(diag_check_backwd) and diag_check_backwd[0] != '-':
    #     return (True, '/D')
    # elif diag_check_forwd.count(diag_check_forwd[0]) == len(diag_check_forwd) and diag_check_forwd[0] != '-':
    #     return (True, '\\D')
    
    return False


game = [['1', '0', '_'],
        ['0', '1', '_'],
        ['1', '0', '_']]

print(win(game))