# ListTransaction where a list is given and modified. But modification only happens if there is
# no error encountered during each step of the modification.
# Also there will be a memory error if length exceeds MAX_LEN_LIST but recoverable and list will be
# modified without the exceeding objects


class MyException(Exception):
    def __init__(self, msg) -> None:
        self.msg = msg
        self.errno = "LST_ERR"
        self.args = (self.msg, self.errno)

    def __str__(self) -> str:
        return self.msg + "/" + self.errno


class OutOfMemoryError(Exception):
    def __init__(self, msg) -> None:
        self.msg = msg
        self.errno = "OFM>6"
        self.args = (self.msg, self.errno)

    def __str__(self) -> str:
        return self.msg + "/" + self.errno


class ListTransaction:
    def __init__(self, thelist):
        self.thelist = thelist
        self.__workingcopy = []  # we will work on this and not the original list

    def __enter__(self):
        self.__workingcopy = list(self.thelist)
        return (
            self.__workingcopy
        )  # we return the working copy as a new list to be held in the as var

    def __exit__(self, type, value, tb):
        if type is None:  # No error occured during context)
            self.thelist[:] = self.__workingcopy
            return True

        if type is OutOfMemoryError:
            print(value)
            # choice = input("Do you want to modify List")
            # exclude the last element that was out of memory
            self.thelist[:] = self.__workingcopy[:-1]

            # We dont need to catch the OutOfMemoryError because we already printed the Error mesage
            # when the OutOfMemoryError cause the __exit__() to be called by using
            # the print(value) statement. thus we return true
            return True

        # if not OutOfMemory and Exception occured.
        # it will get invoked if `it.append(int("*"))` is uncommented
        raise MyException("Error during List Modification")


# ------------------------
# || START READING HERE ||
# ------------------------
items = [1, 2, 3]
MAX_LEN_LIST = 6

print(f"initial list : {items}")

try:
    with ListTransaction(items) as it:
        # we will keep acepting integers until user enters n or N.
        while (append_char := input("append() : ")) != "n" and (append_char != "N"):
            it.append(int(append_char))

            if len(it) > int(MAX_LEN_LIST):
                raise OutOfMemoryError("Out of memory")

except MyException as f:
    print(f, "because of : ", f.__context__)


print(f"updated list : {items}")
