def tenis_calc(game_sequence):
    
    playerA_score = playerB_score = 0
    playerA_game = playerB_game = 0
    
    for j in game_sequence:
        if j =='A':
            playerA_score += 1
        elif j == 'B':
            playerB_score += 1

        if playerA_score == 4:
            playerA_game += 1
            playerA_score = playerB_score =  0
        if playerB_score == 4:
            playerB_game += 1
            playerA_score = playerB_score =  0

    if playerA_game > playerB_game:
        print("Player A Wins")
    elif playerB_game > playerA_game: #extra layer of security
        print("Player B Wins")
    else:
        print("No body wins or invalid sequence")
        
if __name__ == "__main__":
    print("Please enter the game sequece")
    game_sequence = input().upper().strip()
    print(game_sequence)
    tenis_calc(game_sequence)
