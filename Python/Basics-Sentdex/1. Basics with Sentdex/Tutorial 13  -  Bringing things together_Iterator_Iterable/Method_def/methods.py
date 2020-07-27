def two(i):
    print("two")

def one():
    
    def one_one():
        print("one_one")
    
    def two():
        print("Two in one")

    print("One")
    one_one()
#   two(2)      When there is the same method in a method, its scope gets limited inside
    two()
one()


