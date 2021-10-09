#include <iostream>
using namespace std;

int main(){
    
    // read an entire sentence, stop when given '.' and print each sentence
    char ch;
    ch = cin.get();

    while (ch != '.')
    {
        cout << ch;
        ch = cin.get();
    }
}