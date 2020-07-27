/*
 *  This program is to demonstrate thestructure of the main function
 *  The input must be of the following format:
        ./mainFunction argument1 argument2   
 */

#include<iostream>
using namespace std;  


int main(int argc, char *argv[]) {

    cout << "Number of Arguments are " << argc << "\n";
    cout << "Argument 1 is " << argv[0] << "\n";
    cout << "Argument 2 is " << argv[1] << "\n";
}

