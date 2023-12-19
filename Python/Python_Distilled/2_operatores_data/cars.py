class Car:

    def __init__(self, color, mileage, model, type):
        self.model = model
        self.color = color
        self.mileage = mileage
        self.speed = 0
        self.type = type

    def change(self, color, mileage):
        self.color = color
        self.mileage = mileage

    def printCar(self):
        print(f"Color: {self.color}")
        print(f"Mileage: {self.mileage}")
        print(f"Speed: {self.speed}")

    def setSpeed(self, speed):
        self.speed = speed


class ElectricCar(Car):

    def __init__(self, color, milage, model, battery):
        super().__init__(color, milage, model, "electric")
        self.battery = battery
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

    def carPrint(self):
        super().printCar()
        print(f'battery : {self.battery}')
        print(f'autopilot : {self.autopilotStatus}')
        print(f'autopilot credit score : {self.autopilotCreditScore}')
