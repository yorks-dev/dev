
## PROGRESS TRACKING

- [CHAPTER 1 : PYTHON BASICS](#chapter-1--python-basics)
    - [1. Text Strings :](#1-text-strings-)
    - [2. FILE IO](#2-file-io)
        - [Reading Files](#reading-files)
        - [Writing Files](#writing-files)
    - [3. Lists](#3-lists)
      - [Sample FILE IO Code](#sample-file-io-code)
    - [4. Tuples](#4-tuples)
    - [5. Sets](#5-sets)
    - [6. Dictionaries](#6-dictionaries)









# CHAPTER 1 : PYTHON BASICS

1. When using python in interactive mode : '_' variable holds the result of the last operation.
2. To end program use quit() or EOF, in macos/UNIX ctrl+D is EOF

> **It is common to use #! to specify the interpreter on the first line of a program**

```python
#!/Users/ayushdutta/.pyenv/shims/python
```

- We can use a fstring inside a print() : 
```python
print(f'{year:>3d} {principal:0.2f}')
```
Here the :>3d means a 3 decimal number, and 0.2f means round of to 2 deciman accuracy.

> **NOTE : The round() function inplements "baker's rounding" .If the value being rounded is equally close to two multiples, it is rounded to the nearest even.**

> **NOTE : Python does not have ++ or --  operator.** 

**Walrus Operator** : Sometimes, you may see the assignment of a variable and a conditional combined together using the := operator.
```python
x = 0
while((x := x+1) < 10):
    print(x)                # prints 1, 2, 3, 4, 5, ... , 9
```
- The `break` statement just breaks the innermost loop.
- The `continue` statement skips the rest of the loop body.
- `''' xyz '''` is multiline comment, which captures all string in between

### 1. Text Strings :

- `fstrings**`:
 ```python
base_year = 2020,
print(f'{base_year + year:>4d} {principal:0.2f}')
``` 
- `format()` and `%` operators are also used alternative to fstring
```python
print('{0:>3d} {1:0.2f}'.format(year, principal))
print('%3d %0.2f' % (year, principal))
```
- for strings, `string[-1]` refers to the last index
- **String Slicing** : `string[1:5]` from 1st index to 4th.
- `.replace('hello', 'hello2')` function replaces all the occurance.

- **Common String Methods :**
  
  | Method                               | Description                                                                   |
  | ------------------------------------ | ----------------------------------------------------------------------------- |
  | `s.endswith(prefix[,start [,end]])`  | string ends with prefix                                                       |
  | `s.find(sub [, start[,end]])`        | Finds the first occurrence of the specified substring sub or -1 if not found. |
  | `s.replace(old, new[,maxreplace])  ` | Replaces a substring, n times                                                 |
  | `s.split([sep[,maxsplit]])     `     | splits string into maxsplit number of splits                                  |
  | `s.strip([chrs])`                    | Removes whitespaces but removes chars if chrs is given                        |

- **Non-string values can be converted into a string representation by using
the str(), repr(), or format() functions.** 
```python
s = 'hello\nworld'
str(s)
repr(s)
x = 10.235
format(x, "0.2f")
f'{x:0.2f}'
```
output : 
> hello
> world
> hello\nworld
> "10.24"
> "10.24"

### 2. FILE IO

open(FILE) returns a `file oject`
##### Reading Files
```py
with open('data.txt') as file:
  for line in file:
    print(line, end='')
file.close()
```

The `with` statement opens the object as file. file only valid in context.

```py
with open('data.txt') as file:
  data = file.read()  
```
Reads the whole file at once.

```py
with open('data.txt', encoding='utf-8') as file:
  while (chunk := file.read(10000)):
    print(chunk, end='')
```
Reads file in chunks.

##### Writing Files

```py
with open('data.txt', 'wt') as fp:
  while year <= numyears:
    principal = principal * (1+rate)
    print(f'{year:3d} {principal:0.2f}', file=fp)
    year += 1
```
OR
```py
fp.write(f'{year:3d} {principal:0.2f}\n')  #NOTE the \n
```
**Input from Console**
```py
name = input("What is your name")
print("hello", name)
```

### 3. Lists

```py
names = ['Dave', 'Paula', 'Thomas', 'Lewis']
last_index = names[-1]

# splits the letters into a list
letters = list('Dave')

# Multi Dimentional list
a = [1, 'Dave', 3.14, ['Mark', 7, 9, [100, 101]], 10]
value_100 = a[3][3][0] 
```

#### Sample FILE IO Code
```py
# TODO 
# Fileformat : Name,QTY,PRICE
# 1. read filename from argv
# 2. Find total price  accross all rows

import sys

if len(sys.argv) != 2:
    raise SystemExit(f'Usage: {sys.argv[0]} filename')

rows = []

with open(sys.argv[1], "rt") as file:
    for line in file:
        rows.append(line.split(',')[1:])

total = sum([int(row[0]) * float(row[1])  for row in rows])

print(f"SUM : {total}")
```

### 4. Tuples

**`immutable`**

**To create simple data structures, you can pack a collection of values into an immutable object known as a tuple**

Tuples can do indexing, slicing, concat, etc but they can not be modified once created. 

```py
# File containing lines of the form "name,shares,price"

filename = 'portfolio.py.txt'

portfolio = []

with open(filename) as file:
    for line in file:
        row = line.split(',')
        name = row[0]
        shares = int(row[1])
        price = float(row[2])

        holding = (name, shares, price)
        portfolio.append(holding)

# iterating over each holding
total = 0
for _, shares, price in portfolio:
    total += shares * price;

print(f"Total portfolio : {total}")
```

### 5. Sets

**`immutable`**

The elements of a set are typically restricted to **immutable** objects. For example, you can make a set of numbers, strings, or tuples.

> **Unlike lists and tuples, sets are unordered and cannot be indexed by numbers. They must have unique values**

```python
print(portfolio)
s = { sets[0] for sets in portfolio }
```

```bash
[('GOOG', 100, 490.0), ('FB', 88, 542.0), ('ALPH', 33, 23.0), ('GOG', 18, 45.0)]
{'FB', 'ALPH', 'GOOG', 'GOG'}
```

| Operations | Explaination        |
| ---------- | ------------------- |
| a = t \| s | Union               |
| b = t & s  | Intersection        |
| c = t - s  | Difference          |
| d = t ^ s  | Symetric Difference |

**Symetric Difference** - items that are in either s or t but not in both.

| Operation                     | Explaination                              |
| ----------------------------- | ----------------------------------------- |
| a.add('Hello')                | Single item add                           |
| a.update('hello', 'hi', 'yo') | Add multiple items                        |
| t.remove('IBM')               | Remove 'IBM' or raise KeyError if absent. |
| s.discard('SCOX')             | Remove 'SCOX' if it exists.               |
|                               |                                           |


### 6. Dictionaries

```py
s = {
    'name' : 'GOOG',
    'shares' : 100,
    'price' : 490.10,
    'S&P500' : False
  }

  print(s['names])
    if s.get('S&P500') is False:
       s['S&P500'] = True

  print(s)
```

```bash
'GOOG'
{'name' : 'GOOG', 'shares' : 100, 'price' : 490.10 'S&P200' : true}
```
Using tuples with dicts

```py
prices = { }
prices[('IBM', '2015-02-03')] = 91.23
prices['IBM', '2015-02-04'] = 91.42     # Parens omitted

> {('IBM', '2015-02-04'): 91.42}
```
> **NOTE - Any kind of object can be placed into a dictionary, including other dictionaries. However, mutable data structures such as lists, sets, and dictionaries cannot be used as keys.**

**Example Dict Code**
```py
portfolio = [
   ('ACME', 50, 92.34),
   ('IBM', 75, 102.25),
   ('PHP', 40, 74.50),
   ('IBM', 50, 124.75)
]
total_shares = { s[0]: 0 for s in portfolio } 

for name, shares, _ in portfolio:
    total_shares[name] += shares
# total_shares = {'IBM': 125, 'ACME': 50, 'PHP': 40}
```

