# using generator with FILE IO to create a stream of lines with only comments from a code file
# we will use "./comprehension.py" for this.

#
fp = open("top.txt", "r", encoding="UTF-8")
lines = (line.strip() for line in fp)

# make sure to account for line length == 0
comments = (line for line in lines if len(line) > 0 if line[0] == "#")

for comment in comments:
    print(comment)
