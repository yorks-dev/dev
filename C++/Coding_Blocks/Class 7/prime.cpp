#include <iostream>
using namespace std;

bool prime(int n){
    for(int i = 2; i < n; i++){
        
        if(n % 2 == 0)
            return false;  // Return is used to break out of function

    }
    return true;
}

int main() {

    cout << "Prime ? : " << prime(4) << endl;

}