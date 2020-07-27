//Section 
//Find the average of 3 Numbers

#include <iostream>

using namespace std;

int main() {

    int num1 {0}, num2{0}, num3 {0};
    int sum {0};
    cout << "Enter 3 Integers seperated by spaces" << endl;
    cin >> num1 >> num2 >> num3;
    sum = num1 + num2 + num3;
    double average = static_cast<double>(sum) / 3; 
    cout << "The Average is " << average << endl;
}
