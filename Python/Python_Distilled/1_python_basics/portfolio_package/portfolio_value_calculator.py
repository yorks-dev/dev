
from . import readport

portfolio_filename = input("FilePath to Portfolio : ")

# list with tuples [(Bank of America Corp,25,35), (Coca-Cola Co,10,55), ...]

portfolio = readport.read_portfolio(portfolio_filename)

total_price = sum(num_shares * price for _ , num_shares, price in portfolio)
print(f"Total share : {total_price}")

