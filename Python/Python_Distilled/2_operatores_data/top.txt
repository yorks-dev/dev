# Some data (a list of dictionaries)

portfolio = [
    {"name": "IBM", "shares": 100, "price": 91.1},
    {"name": "MSFT", "shares": 50, "price": 45.67},
    {"name": "HPE", "shares": 75, "price": 34.51},
    {"name": "CAT", "shares": 60, "price": 67.89},
    {"name": "IBM", "shares": 200, "price": 95.25},
]


# List of shares with more than 100 shares.

more100 = [s["name"] for s in portfolio if s["shares"] > 100]
print(more100)

# List the same with total shares in actuallity
portfolio2 = {s["name"]: 0 for s in portfolio}

for s in portfolio:
    portfolio2[s["name"]] += s["shares"]

print(portfolio2)

# Use of walrus operator with dict and list
more100_dict = [{s["name"]: v} for s in portfolio if (v := s["shares"]) >= 100]

# Use of walrus operator with sets and tuples
more100_set = {(s["name"], v) for s in portfolio if (v := s["shares"]) >= 100}

print(more100_dict)
print(more100_set)


# Typechecking during comprehension
# > Convert to integer listx


def toint(i):
    try:
        return int(i)
    except ValueError:
        return None


values = ["1", "2", "3", "4", "-1", "-2", "n/a", "8", "9"]

# values_int = [int(i) for i in values]  -> ERROR
values_int = [toint(i) for i in values]
print(values_int)
