#include <iostream>
using namespace std;

int main() {
    
    char c;
    int flag = 0; 
    cin >> c;
    
    if( c >= 'a' && c <= 'z'){
        cout << "LOWER\n";
    }
    else if( c >= 'A'&&  c <= 'Z'){
        cout << "UPPER\n";
    }
} 
