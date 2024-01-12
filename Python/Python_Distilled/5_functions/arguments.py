# Variadic Keyword Arguments


class Car:
    def __init__(self) -> None:
        self.make_year = None
        self.model = None
        self.engine_type = None
        self.autopilot = None
        self.additional_details_dict = {}

    # we force engine_type and autopilot to be keyword type args and the rest goes into **kwargs
    def make_car(self, make_year, model, *, engine_type, autopilot, **kwargs):
        self.make_year = make_year
        self.model = model
        self.engine_type = engine_type
        self.autopilot = autopilot
        self.additional_details_dict = kwargs
        for key, value in kwargs.items():
            setattr(self, key, value)  # creating new attributes

    def __repr__(self) -> str:
        string = (
            f"{self.make_year} {self.model}, {self.engine_type}, "
            + f"autopilot : {self.autopilot}\n"
        )
        for key, value in self.additional_details_dict.items():
            string += f"{key} : {value}\n"
        return string


car1 = Car()
car1.make_car(
    "2022",
    "Honda City",
    engine_type="GASOLINE",
    autopilot="FALSE",
    warranty="5 years",
    cost="$23,000",
)

print(car1)
