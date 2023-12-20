class Car:

    def __init__(self, color, milage, model, topSpeed, unit, vehicle_type):
        self.color = color
        self.mileage = milage
        self.model = model
        self.vehicle_type = vehicle_type
        self.topSpeed = (topSpeed, unit)
        self.accidentStatus = False

    def change(self, color, mileage):
        self.color = color
        self.mileage = mileage

    def printCarInfo(self):
        print(f"Color: {self.color}, Mileage: {self.mileage}, Model: {
              self.model}, Speed: {self.topSpeed}, Vehicle_type: {self.vehicle_type}")
        print(f"Accident status: {self.accidentStatus}")

    def changeAccidentStatus(self):
        self.accidentStatus = True


class ElectricCar(Car):

    def __init__(self, color, milage, model, topSpeed, unit, battery, range):
        super().__init__(color, milage, model, topSpeed, unit, "electric")
        self.battery = battery
        self.range = range
        self.autopilotStatus = False
        # default credit score at the start. [500, 800]
        self.autopilotCreditScore = 700

    def autopilotActivate(self):
        self.autopilotStatus = True

    def __revokeAutopilot(self):
        self.autopilotStatus = False

    def autopilotCreditScore_tooLow(self):
        if self.autopilotCreditScore < 600:
            print("Autopilot credit score is low.")
            self.__revokeAutopilot()

    def printAutopilotStatus(self):
        print(self.autopilotStatus)

    def carPrint(self):
        super().printCarInfo()
        print(f'battery : {self.battery}')
        print(f'range : {self.range}')
        print(f'autopilot : {self.autopilotStatus}')
        print(f'autopilot credit score : {self.autopilotCreditScore}')


class GasolineCar(Car):
    def __init__(self, color, milage, model, engineCC, topSpeed, unit, fuelTankSize, fuelConsumption):
        super().__init__(color, milage, model, topSpeed,
                         unit, "gasoline")
        self.fuelTankSize = (fuelTankSize, "L")
        self.fuelConsumption = (fuelConsumption, "KMPL")
        self.engineCC = engineCC

    def carPrint(self):
        super().printCarInfo()
        print(f'fuelTankSize : {self.fuelTankSize}')
        print(f'fuelConsumption : {self.fuelConsumption}')
        print(f'engineCC : {self.engineCC}')
