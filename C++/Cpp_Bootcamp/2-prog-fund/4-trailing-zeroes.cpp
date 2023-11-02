#include <iostream>
using namespace std;

// Calculate the number of trailing zeroes in N!.
// So basically for a zero to occure 5 is compulsory. each 0 means one 5 present.
// So we need the number of 5 in N!
// =-> We  do  -
//   (N/5) + (N/5^2) + (N/5^3) ... [floor]

int main(){

    cout << "Whats the Number ? :  ";
    int num;
    cin >> num;
    int num_zero = 0, five_pow = 5;

    while(num > 0){
        num_zero += (num /= five_pow);
        five_pow *= 5;
    }

    cout << "Number of trailing 0 is : " << num_zero << endl;
}