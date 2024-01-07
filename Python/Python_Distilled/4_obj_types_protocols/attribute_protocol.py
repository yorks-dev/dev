import datetime


class Student:
    def __init__(self, name, dob: datetime.date):
        self.name = name
        self.dob = dob
        self.roll = None

    def set_roll(self, roll):
        self.roll = roll

    def __repr__(self) -> str:
        return f"{self.roll} : {self.name}, dob : {self.dob}"


ayush = Student(
    "Ayush Dutta",
    datetime.date(2002, 11, 7),
)

ayush.set_roll("A1")
print(ayush)
print(ayush.__getattribute__("name"))
ayush.__setattr__("roll", "A2")
print(ayush)
