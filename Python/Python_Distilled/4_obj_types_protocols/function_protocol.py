class Int:
    def __call__(self, string):
        return int(string)


integer = Int()
print(integer("8"))


# import time


# def after(seconds, func, /, *args, **kwargs):
#     time.sleep(seconds)
#     print(args)
#     return func(*args, **kwargs)


# def duration(*args, seconds, minutes, hours):
#     print(args)
#     print(seconds + 60 * minutes + 3600 * hours)


# after(5, duration, "JUMBO", seconds=20, minutes=3, hours=2)


# student = {}


# def student_create(name, dob, **kwargs):
#     student["name"] = name
#     student["dob"] = dob
#     add_profile_student(**kwargs)


# def add_profile_student(**kwargs):
#     for key, value in kwargs.items():
#         student[key] = value


# student_create("LUGEN", "28-11-2003", age=20, address="Monlaque, Ibajay, Aklan")
# print(student)
