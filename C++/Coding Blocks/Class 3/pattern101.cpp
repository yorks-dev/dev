#include <iostream>
using namespace std;

int main() {
    int start = 1, p;
    for(int i = 0; i <= 3; i++){
        p = start;
        for(int j = 0; j < i+1; j++){
            cout << p ;
            p = 1 - p;
        }
        cout << "\n";
        start = 1 - start;}
}

