#include <iostream>
using namespace std;

// nCr = n! / (n - r)! r! 

double factorial(int num){
    if(num == 1)
        return 1;
    int fact = num * factorial(num - 1);

    return fact;
}

int main(){

    int n, r;
    cout << "Enter n _space_ r : ";
    cin >> n >> r;

    cout << factorial(n) / (factorial(n - r) * factorial(r)) << endl; 

}
