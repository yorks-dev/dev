#BuzzFeed True Love Calculator

print("Welcome to the True Love Calculator !!")

name1 = (input("What is your Name ? ")).lower()
name2 = input("What is your crush's name?").lower()

num_t = name1.count("t") + name2.count("t")
num_r = name1.count("r") + name2.count("r")
num_u = name1.count("u") + name2.count("u")
num_e = name1.count("e") + name2.count("e")
num_l = name1.count("l") + name2.count("l")
num_o = name1.count("o") + name2.count("o")
num_v = name1.count("v") + name2.count("v")
num_e = name1.count("e") + name2.count("e")


print("Chance : " + str(num_t+num_r+num_u+num_e) + str(num_l+num_o+num_v+num_e))