//Section5
//Basic I/O using cin and cout

#include <iostream>

// For good practice use the below formant and not "using namespace std"

using std::cin;
using std::cout;
using std::endl;

int main()
{

    // cout << "Hello World" << endl;
    // cout << "Hello World";

    /*
   cout << "Hello ";
   cout << "World" << endl;
   */

    /*
    cout << "Hello world" << endl;
    cout << "Hello" << " World" << endl;
    cout << "Hello " << "World\n";
    cout << "Hello\nOut\nThere\n";
    */

    int num1;
    int num2;
    double num3;

    /*
    cout << "Enter the Integer : ";
    cin >> num1;
    cout << "You entered : " << num1 << endl;
    */

    /*
    cout << "Enter two integers seperated by any whitespace (space or enter or any)" << endl;
    cin >> num1 >> num2;
    cout << "You entered : " << num1 << " and " << num2 << endl;
    */

    /*
    cout << "Enter a Double : ";
    cin >> num3;
    cout << "You Entered " << num3 << endl;
    */

    cout << "Enter an Integer : ";
    cin >> num1;
    cout << "Enter a Double : ";
    cin >> num3;

    cout << "The integer is " << num1 << endl;
    cout << "The Double is " << num3 << endl;
    cout << "num2 is : " << num2 << endl;


    return 0;
}
