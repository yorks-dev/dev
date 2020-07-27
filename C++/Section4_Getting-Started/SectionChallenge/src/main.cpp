/*************************************
 * @author : Ayush Dutta
 * @version : 1.0
 * This is called a multi line comment
 * This style is called documentation style comment

*************************************/

#include <iostream>

// We write this line of code so that we dont have to use std:: everytime  
using namespace std;  


int main() {

    cout << "Enter a number between 1 and 100 \n";
    int fav_num;
    cin >> fav_num;
    cout << "Amazing!! That's my favourite number too ! \nNo Really!! " << fav_num << + " is my favourite number !\n";
}
