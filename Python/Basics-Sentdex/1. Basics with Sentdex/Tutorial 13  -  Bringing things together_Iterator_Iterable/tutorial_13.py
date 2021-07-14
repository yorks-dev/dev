import itertools
from colorama import Fore, Back, Style, init

init(autoreset = True)

def win(current_game):
    
    # Horizontal
    
    for row in current_game:
        if row.count(row[0]) == len(row) and row[0] != ' ':
             return (True, "-H")

    #Vertical    

    for col in range(0, len(current_game[0])):
        vertical_check = []
        for row in range(0, len(current_game)):
            vertical_check.append(current_game[row][col])
        if vertical_check.count(vertical_check[0]) == len(vertical_check) and vertical_check[0] != ' ':
            return (True, "|V")

    # Diagonally

    diag_check_forwd = [row[pos] for pos, row in enumerate(current_game)]
    diag_check_backwd = [row[len(row) - 1 - pos] for pos, row in enumerate(current_game)]
        
    if diag_check_backwd.count(diag_check_backwd[0]) == len(diag_check_backwd) and diag_check_backwd[0] != ' ':
        return (True, '/D')
    elif diag_check_forwd.count(diag_check_forwd[0]) == len(diag_check_forwd) and diag_check_forwd[0] != ' ':
        return (True, '\\D')
    
    return (False,'')


def game_board(current_game, player_move='O', row=0, column=0, print_only=False):
        print("    A B C")
        print("   -------")
        
        if print_only == False:
            if player_move == 'X':
                current_game[row][column] = Fore.GREEN + player_move
            else:
                current_game[row][column] = Fore.MAGENTA + player_move
        for count, row in enumerate(current_game, start=1):
            print(count, end=" | ")
            for value in row:
                print(value, end=" ")
            print("|")
        print("   -------")
print(
"""
Welcome to the Python Tic Tac Toe Game for Programers
--> Player one will have 'X' and player two will have 'O'   
""")



play = True
while play == True:
    
    game =  [[' ', ' ', ' '],
             [' ', ' ', ' '],
             [' ', ' ', ' ']]

    game_board(game, print_only=True)
    winner_found = False        # Player one is to be deccided among friends
   
    while winner_found == False:
        player_num = itertools.cycle([[1,'X'], [2,'O']])
        next_player = True
        while True:  # Looping over each player in a circle
            if next_player == True:
                i = next(player_num)
            else:
                next_player = True
            print(f"Player {i[0]} ({i[1]}) : ", end="")
            player_move = input().strip()
            row_ent = ""
            col_ent = ""
            for idx in player_move:
                if idx.isdigit():
                    row_ent += idx
                elif idx.isalpha():
                    col_ent += idx

            try:
                row_ent = int(row_ent) - 1      # Finding exact position on board
                col_ent = int(ord(col_ent.upper())) - 65

                if not(0 <= row_ent < len(game)):
                    raise Exception(Fore.RED + "Row entry invalid - You must play inside the board !! LOL ".upper())
                
                elif not(0 <= col_ent < len(game)):
                    raise Exception(Fore.RED + "Column Entry invalid - You must play inside the board !! LOL".upper())

                elif game[row_ent][col_ent] != ' ':
                    raise Exception(Fore.RED + "Invalid Entry !! That sopt has already been played by your oponent !!".upper())

            except Exception as e:
                # if type(e) == TypeError:
                if type(e) == TypeError:
                    print(Fore.RED + "Column Entry invalid - You must play inside the board !! LOL".upper())
                else:
                    print(Fore.RED + str(e))
                next_player = False
                continue

            # game_board(game, i[1], row_ent, col_ent)  #i[1] is the char 'O' or 'X'
            winner_found = win(game)[0]
            if (winner_found == True):
                print(Fore.YELLOW + "----------------------------------------")
                print(Fore.YELLOW + f"Congrts Player {i[0]} !! .. You WIN !!")
                print(Fore.YELLOW + "----------------------------------------")
                break
    
    print("Do you two wanna play again ? (y/n)")
    choice = input().strip().lower()
    if choice == 'n':
        play = False
        print("Have a nice day !!")

    


    
        
