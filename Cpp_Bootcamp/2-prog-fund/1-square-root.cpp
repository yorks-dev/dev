#include <iostream>
using namespace std;

int main()
{

    int num = 0, prec = 0; // num = 4
    cout << "Enter the number followed by the precission (sep by space)" << endl;
    cin >> num >> prec;

    double factor = 1; //divide by 10 in every precission
    double estimation = 0;

    for(int i = 0; i <= prec; i++){
        while (estimation * estimation <= num)
        { // 0, 1, 2
            estimation += factor;
        }
        estimation -= factor; // doing it to take the closest value after check.
        factor /= 10;
    }

    cout << estimation;
}