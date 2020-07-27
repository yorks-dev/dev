#include <iostream>
#include <climits>

using namespace std;

int main() {
    
    cout << "Size Of Information" << endl;
    cout << "==============================" << endl;
    cout << "char : " << sizeof(char) << "bytes" << endl;
    cout << "int : " << sizeof(int) << "bytes" << endl;
    cout << "unsigned int : " << sizeof(unsigned int) << "bytes" << endl;
    cout << "short : " << sizeof(short) << "bytes" << endl;
    cout << "long : " << sizeof(long) << "bytes" << endl;
    cout << "long long : " << sizeof(long long) << "bytes" << endl;
    cout << "==============================" << "bytes" << endl;
    cout << "float : " << sizeof(float) << " bytes" << endl;
    cout << "double : " << sizeof(double) << " bytes" << endl;
    cout << "long double : " << sizeof(long double) << " bytes" << endl;

    cout << "==============================" << endl;
    cout << "Seeing the max and the min and constants defined by <climits>" << endl;
    cout << "Max  number to be stored in long : " << LONG_MAX << endl;
    cout << "Min  number to be stored in long double : " << __LDBL_MIN__ << endl;
    cout << "==============================" << endl;
    
    cout << "Size of Using variable names" << endl;

    int age {21};
    cout << "Size of age is : " << sizeof(age) << endl;
    // or
    cout << "Size of age is : " << sizeof age << endl;


}
