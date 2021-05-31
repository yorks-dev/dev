#include <iostream>
using namespace std;


void iseven(int n);

int main(){
    iseven(4);
}

void iseven(int n){
    if(n % 2 == 0){
        cout << "true\n";
    }
    else cout << "false\n";
}