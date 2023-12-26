class ApplicationError(Exception):
    def __init__(self, msg):
        self.msg = msg


def do_something():
    x = int("N/A")
    print(x)


def spam():
    try:
        do_something()
    except Exception as e:
        raise ApplicationError("do_something() Failed") from e


# spam() ->  #If an uncaught ApplicationError occurs, you will get a message
# that includes both exceptions.

# Lets catch it now.
# start reading here.
try:
    spam()
except ApplicationError as f:
    print(f"{f.msg}. Reason:", f.__cause__)

# __cause__ attribute contains the previous exception
# here for example - <class 'ValueError'> exception
