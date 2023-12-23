import cars

car1 = cars.ElectricCar(
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

car2 = cars.GasolineCar(
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

car3 = cars.ElectricCar(
    color="green",
    milage=120000,
    model="Ford F150 Lightning",
    top_speed=120,
    unit="MPH",
    battery=3500,
    battery_range=350,
)

car3.car_print()

car4 = cars.ElectricCar(
    color="black",
    milage=10000,
    model="Revean",
    top_speed=140,
    unit="MPH",
    battery=3000,
    battery_range=400,
)

car4.car_print()

car5 = cars.GasolineCar(
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
