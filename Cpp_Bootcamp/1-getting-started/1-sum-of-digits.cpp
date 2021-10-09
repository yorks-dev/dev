#include <iostream>
using namespace std;

int main(){

    int num, sum = 0;
    cout << "whats the number ? " ;
    cin >> num;

    while (num > 0){
        sum += num % 10;
        num /= 10;
    }
    
    cout << "Num : " << sum << endl;
    
}
