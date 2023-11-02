// COnvert binary to decimal [generate 2^n and multiply with remainder]

#include <iostream>
using namespace std;

int main(){

    int bin, dec = 0;
    cout << "Whats the number ? : ";
    cin >> bin;

    int two_power = 1;
    while(bin > 0){
        dec += (bin % 10) * two_power;
        two_power *= 2;
        bin /= 10;
    }

    cout << "Decimal is : " << dec << endl;
}