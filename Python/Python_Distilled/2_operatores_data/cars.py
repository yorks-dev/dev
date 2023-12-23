class Car:
    def __init__(self, color, milage, model, top_speed, unit, vehicle_type):
        self.color = color
        self.mileage = milage
        self.model = model
        self.vehicle_type = vehicle_type
        self.top_speed = (top_speed, unit)
        self.accident_status = False

    def change(self, color, mileage) -> None:
        self.color = color
        self.mileage = mileage

    def print_car_info(self):
        print(
            f"Color: {self.color}, Mileage: {self.mileage}, Model: {self.model}, Speed: {self.top_speed}, "
            f"Vehicle_type: {self.vehicle_type}"
        )
        print(f"Accident status: {self.accident_status}")

    def change_accident_status(self):
        self.accident_status = True


class ElectricCar(Car):
    def __init__(self, color, milage, model, top_speed, unit, battery, battery_range):
        super().__init__(color, milage, model, top_speed, unit, "electric")
        self.last_service = None
        self.battery = battery
        self.range = battery_range
        self.autopilot_status = False
        # default credit score at the start. [500, 800]
        self.autopilot_credit_score = 700

    def autopilot_activate(self):
        self.autopilot_status = True

    def autopilot_deactivate(self):
        self.autopilot_status = False
        self.autopilot_credit_score = 600

    def generate_service_history(self, last_service_date):
        self.last_service = last_service_date

    def __revoke_autopilot(self):
        self.autopilot_status = False

    def autopilot_credit_score_too_low(self):
        if self.autopilot_credit_score < 600:
            print("Autopilot credit score is low.")
            self.__revoke_autopilot()

    def print_autopilot_status(self):
        print(self.autopilot_status)

    def car_print(self):
        super().print_car_info()
        print(f"battery : {self.battery}")
        print(f"range : {self.range}")
        print(f"autopilot : {self.autopilot_status}")
        print(f"autopilot credit score : {self.autopilot_credit_score}")


class GasolineCar(Car):
    def __init__(
        self,
        color,
        milage,
        model,
        engine_cc,
        top_speed,
        unit,
        fuel_tank_size,
        fuel_consumption,
    ):
        super().__init__(color, milage, model, top_speed, unit, "gasoline")
        self.fuel_tank_size = (fuel_tank_size, "L")
        self.fuel_consumption = (fuel_consumption, "KMPL")
        self.engine_cc = engine_cc

    def car_print(self):
        super().print_car_info()
        print(f"fuelTankSize : {self.fuel_tank_size}")
        print(f"fuelConsumption : {self.fuel_consumption}")
        print(f"engineCC : {self.engine_cc}")


def main():
    car1 = ElectricCar(
        color="red",
        milage=10000,
        model="Tesla",
        top_speed=140,
        unit="MPH",
        battery=3000,
        battery_range=400,
    )
    car1.car_print()
    car1.autopilot_activate()
    car1.car_print()
    car1.change_accident_status()
    car1.car_print()

    print("--------------------------------")

    car2 = GasolineCar(
        color="blue",
        milage=18000,
        model="Honda",
        engine_cc="2.5L",
        top_speed=110,
        unit="MPH",
        fuel_tank_size="40",
        fuel_consumption="14",
    )

    car2.car_print()
    car2.change_accident_status()
    car2.car_print()

    print("--------------------------------")

    car3 = ElectricCar(
        color="green",
        milage=120000,
        model="Ford F150 Lightning",
        top_speed=120,
        unit="MPH",
        battery=3500,
        battery_range=350,
    )

    car3.car_print()

    car4 = ElectricCar(
        color="black",
        milage=10000,
        model="Revean",
        top_speed=140,
        unit="MPH",
        battery=3000,
        battery_range=400,
    )

    car4.car_print()

    car5 = GasolineCar(
        color="white",
        milage=1200,
        model="Kia",
        engine_cc="2.5L",
        top_speed=110,
        unit="MPH",
        fuel_tank_size="60",
        fuel_consumption="16",
    )

    car5.car_print()


if __name__ == "__main__":
    main()
