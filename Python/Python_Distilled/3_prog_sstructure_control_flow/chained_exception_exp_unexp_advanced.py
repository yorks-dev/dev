class ApplicationError(Exception):
    def __init__(self, msg):
        self.msg = msg


class FirstException(Exception):
    def __init__(self, msg, errno):
        self.msg = msg
        self.errno = errno
        self.args = (msg, errno)


def do_something():
    raise FirstException("First Exception", "ERROR1")
    # raise FirstException("First Exception", "1")


def spam():
    try:
        do_something()
    except FirstException as e:
        err_num = int(e.errno)  # This gives error if errno is ERROR1 and not 1
        # This error is unexpected. It will no longer raise ApplicationError
        print(err_num)
        raise ApplicationError("It Failed") from e


# spam() ->  #If an uncaught ApplicationError occurs, you will get a message
# that includes both exceptions.

# Lets catch it now.
# start reading here.
try:
    spam()
except Exception as f:
    # depending on errno ERROR1 or 1, it will get an ApplicationError or ValueError.
    print(type(f))
    # This will return None if no unexpected error was raised during FirstExeption,
    # else if the expected ApplicationError was raised the it will hold previous exception,
    # i.e FirstException
    print("Reason:", f.__cause__)
    # This will return the previous exception in case of both expected and unexpected exception
    print("Reason:", f.__context__)

# __cause__ attribute contains the previous exception
# here for example - <class 'ValueError'> exception
