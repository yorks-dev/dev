# def simple_gen():
#     yield "1"
#     yield "2"
#     yield "3"

# for i in simple_gen():
#     print(i)

ORG_PASSWORD = (9, 6, 9)

def pass_gen(): #Its a generator
    for c1 in range(10):
        for c2 in range(10):
            for c3 in range(10):
                yield (c1, c2, c3)

for i in pass_gen():
    print(i)
    if i == ORG_PASSWORD:
        print("MATCH FOUND : {}".format(i))
        break
