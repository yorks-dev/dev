import cars

car1 = cars.ElectricCar(
    color="red",
    milage=10000,
    model="Tesla",
    topSpeed=140,
    unit="MPH",
    battery=3000,
    range=400,
)
car1.carPrint()
car1.autopilotActivate()
car1.carPrint()
car1.changeAccidentStatus()
car1.carPrint()

print("--------------------------------")

car2 = cars.GasolineCar(
    color="blue",
    milage=18000,
    model="Honda",
    engineCC="2.5L",
    topSpeed=110,
    unit="MPH",
    fuelTankSize="40",
    fuelConsumption="14",
)

car2.carPrint()
car2.changeAccidentStatus()
car2.carPrint()

print("--------------------------------")

car3 = cars.ElectricCar(
    color="green",
    milage=120000,
    model="Ford F150 Lightning",
    topSpeed=120,
    unit="MPH",
    battery=3500,
    range=350,
)

car3.carPrint()

car4 = cars.ElectricCar(
    color="black",
    milage=10000,
    model="Revean",
    topSpeed=140,
    unit="MPH",
    battery=3000,
    range=400,
)

car4.carPrint()

car5 = cars.GasolineCar(
    color="white",
    milage=1200,
    model="Kia",
    engineCC="2.5L",
    topSpeed=110,
    unit="MPH",
    fuelTankSize="60",
    fuelConsumption="16",
)

car5.carPrint()
