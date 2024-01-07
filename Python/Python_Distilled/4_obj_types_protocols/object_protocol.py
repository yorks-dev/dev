class MyWords:
    def __init__(self, word: str):
        self.words = [word]

    def get_words(self) -> list:
        return self.words

    def add_words(self, *words: str):
        for i in words:
            self.words.append(i)

    def del_word(self, word):
        self.words = [i for i in self.words if i != word]

    def print_words(self):
        for i in self.words:
            print(i, end=", ")
        print()


my_list = MyWords.__new__(MyWords)
if isinstance(my_list, MyWords):
    my_list.__init__("first_word")
