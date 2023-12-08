# format of csv : Name,Number_of_Shares,Price_per_Share

import sys
import csv


def read_portfolio(filename):
    
    portfolio = []
    
    try:  # for file check
        with open(filename, "r") as file:
            rows = csv.reader(file)
            for index, row in enumerate(rows):
                try:
                    # row = line.split(',')
                    name = row[0]
                    shares = int(row[1])
                    price = int(row[2])
                
                    holding = (name, shares, price)
                    portfolio.append(holding)
                
                except:
                    raise ValueError(f"Error parsing rows {index}")
    except:
        print("ERROR : FILE NOT FOUND or ERROR OPENING FILE")
                
    return portfolio


def main(argv):
    if len(argv) == 1:
        filename = input("Enter filename : ")
    elif len(argv) == 2:
        filename = argv[1]
    else: 
        raise SystemExit(f"Use: python {argv[0]} filename")
    
    portfolio = read_portfolio(filename)
    for index, (name, shares, cost) in enumerate(portfolio):
        print(f"{index+1}. {name}, {shares}, ${cost} : ${shares * cost}")

if __name__ == '__main__':
    main(sys.argv)
