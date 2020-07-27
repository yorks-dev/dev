//Section 6
// Find out the cost of cleaning rooms/

#include <iostream>
using namespace std;

int main () {

    cout << "----------------------------------------" << endl;
    cout << "Welcome to Ayush's Home Cleaning Service" << endl;
    cout << "----------------------------------------" << endl;
    
    const double cost_per_room {30}; 
    const double sales_tax_rate (6);
    unsigned int room_num {0};

    cout << "Cost per room is $30 " << endl;
    cout << "How many Rooms do you want cleaned ?" << endl;
    cin >> room_num;
    cout << "----------------------------------------" << endl;
    cout << "Printing out you bill" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Number of rooms selected is " << room_num << endl;

    double totl_before_tax {room_num * cost_per_room};
    
    cout << "Total amount before tax is $" << totl_before_tax << endl; 
    cout << "Tax amount of 6\% is $" << totl_before_tax * sales_tax_rate / 100 << endl;
    cout << "----------------------------------------" << endl;
    cout << "Total price to be paid is $" << totl_before_tax * 1.06 << endl;
    cout << "----------------------------------------" << endl;
    cout << "Whats the matter" << endl;

}