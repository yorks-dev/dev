game = [['x', 'O', 'x'],
        ['_', 'x', '_'],
        ['x', '_', 'x']]


diag_check_forwd = [row[pos] for pos, row in enumerate(game)]
diag_check_backwd = [row[len(row) - 1 - pos] for pos, row in enumerate(game)]

if diag_check_backwd.count(diag_check_backwd[0]) == len(diag_check_backwd) or diag_check_forwd.count(diag_check_forwd[0]) == len(diag_check_forwd):
    print("Winner !!")



