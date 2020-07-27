#include <iostream>
using namespace std;
    
int main() {

    cout << "Welcome to the Carpet Cleaning Service" << endl;
    
    double smallroom_price {25.0}, largeroom_price {35.0};
    int smallroom_num {0}, largeroom_num {0};
    double tax_rate {6};
    cout << "Number of small rooms : ";
    cin >> smallroom_num;
    cout << "Number of large rooms : ";
    cin >> largeroom_num;

    cout << "Estimated Bill for your order" << endl;
    cout << "Number of small rooms : " << smallroom_num << endl;
    cout << "Number of large rooms : " << largeroom_num << endl;
    cout << "Price per small room is $" << smallroom_price << endl;
    cout << "Price per large room is $" << largeroom_price << endl;
    
    double cost {smallroom_num * smallroom_price + largeroom_num * largeroom_price};
    double tax { cost * tax_rate / 100 };
     
    cout << "Cost : $" << cost << endl;
    cout << "Tax : $" << tax << endl;
    cout << "------------------------" << endl;
    cout << "Total cost after Tax : $" << cost + tax << endl;

    return 0;
}

