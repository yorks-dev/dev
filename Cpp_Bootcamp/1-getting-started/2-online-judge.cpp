//  You are given n numbers, and you have to return the square of those numbers.

#include <iostream>
using namespace std;

int main(){

    int N;
    cout << "enter the number of numbers ? " << endl;
    cin >> N;

    int num;
    while(N > 0){
        
        cin >> num;
        cout << num * num << endl;
        N--;

    }

}