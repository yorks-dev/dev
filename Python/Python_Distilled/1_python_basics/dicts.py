#  get() function

from collections import Counter

s = {
    'name' : 'GOOG',
    'shares' : 100,
    'price' : 490.10,
    'S&P500' :False
}

print(s['name'])
      
if s.get('S&P500') ==  False:
    s['S&P500'] = True

print(s)


# Tuples and dicts

prices = { }
prices[('IBM', '2015-02-03')] = 91.23
prices['IBM', '2015-02-04'] = 91.42     # Parens omitted
print(prices)

portfolio = [
   ('ACME', 50, 92.34),
   ('IBM', 75, 102.25),
   ('PHP', 40, 74.50),
   ('IBM', 50, 124.75)
]

total_shares = { s[0]:0 for s in portfolio }
print(total_shares)

for name, shares, _ in portfolio:
    total_shares[name] += shares
# total_shares = {'IBM': 125, 'ACME': 50, 'PHP': 40}

print(total_shares)


# Implementing Counter() instead of using dict to count
total_shares2 = Counter()

for name, shares, _ in portfolio:
    total_shares2[name] += shares

print(total_shares2)

