//Arrays
#include <iostream>

using namespace std;

int main() {

    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    cout << "0th Element : " << vowels[0] << endl;
    cout << "1st Element : " << vowels[1] << endl;

    // cin >> vowels[5];  --> Raises and error (out of bound)

    double high_temp[] {30, 20, 32, 33, 34};
    cout << "0th high_temp is : " << high_temp[0] << endl;
    high_temp[0] = 35;
    cout << "0th high_temp new is : " << high_temp[0] << endl;

    // When we print the name of the array
    cout << "Value of the Array name -> Location of the array : " << high_temp << endl;

    int num1 {4};
    cout << num1++ + ++num1;

    return 0;
}