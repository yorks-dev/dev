class DeviceError(Exception):
    def __init__(self, errno, msg) -> None:
        self.args = (errno, msg)
        self.errno = errno
        self.msg = msg

    # or if you dont want seperate variables for the args

    # def __init__(self, *args: object) -> None:
    #     super().__init__(*args)


try:
    raise DeviceError(1, "Not Responding")
except DeviceError as e:
    print(e.args)
    print(e.errno)
    print(e.msg)
