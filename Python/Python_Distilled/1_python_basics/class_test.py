
from math import radians


class Stack:
    
    def __init__(self) -> None:
        self._items = []
    
    def push(self, item):
        self._items.append(item)
        
    def pop(self):
        self._items.pop()
    
    def __len__(self):
        return len(self._items)
    
    def __repr__(self):
        return f'<{type(self).__name__} at 0x{id(self):x}, size={len(self)}>'
    
    def print(self):
        print(self._items)

    
s = Stack()
s.push('ONE')
s.pop()
for item in ['ONE', 'TWO']:
    s.push(item) 
s.push('THREE')
s.print()

print(f'len = {len(s)}')
print(s)


# INHERITANCE

class MyStack(Stack):
    def print_len(self):
        return "len : " + str(len(self._items))
    
    ## CHANGING METHOD behaviour of Parent class
    def push(self, item):
        if not isinstance(item, (int, float)):
            raise TypeError('Expected an integer value')
        super().push(item)
        
    
s1 = MyStack()
# s1.push('ONE') -> ERROR
s1.push(1)
print(s1.print_len())
s1.print()