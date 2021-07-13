# Question @Aman Mathur U20:

# 1 question hai kaafi simple hai par accha lga merko,
# Dekho ki tumhe 1 list de rkha hai n numbers ka , sab different hai , ab tum uska max nikalna hai using this algorithm,
# Set max as -infinity(minimum possible value)
# Traverse through the list
# If the current element > max
# max = current element,
# Is algorithm se list me 1 baari traverse krke hum max element nikaal skte hai , ab question ye hai ki find the expected number of times the if statement is satisfied for n elements

# For example agar n= 2 hai to expected value is 1.5,
# Aise  2 possible combinations ho skte hai
# 1 ,2  or 2,1,
# 1,2 me to baari if condition satisfy hogi , 2,1 me 1 baari, 
# To ans is( 2+1)/2 = 1.5

import numpy as np, itertools

def max_calc(rec_list):  
    sum_of_ifs = 0
    
    permut_list = itertools.permutations(rec_list)

    for i in permut_list:
        max = -np.inf
        for j in i:
            if int(j) > max:
                max = int(j)
                sum_of_ifs += 1

    ans = sum_of_ifs / np.math.factorial(len(rec_list))    
    return ans

if __name__ == "__main__":
    ans = max_calc(input().split( ))
    print(ans)

# 1, 2, 3 -> 3
# 1, 3, 2 -> 2
# 2, 1, 3 -> 2
# 2, 3, 1 -> 2
# 3, 1, 2 -> 1
# 3, 2, 1 -> 1