// Section 6
// Primitive Types (Data Types)

#include <iostream>
using namespace std;

int main() {

    // Character Type
    char last_initial {'D'};
    cout << "My Last Initial is " << last_initial << endl;

    //Integer Type
    unsigned short int exam_score {100};
    cout << "Exam Score is " << exam_score << endl;

    int countries_rep {65};
    cout << "Number of countries is " << countries_rep << endl;

    // Big Integer
    long people_in_florida {20610000};
    cout << "Number of people in Florida is " << people_in_florida << endl;

    //Really big Integer
    long long a_very_big_number {7602000000000000000};
    cout << "Number of people on earth is " << a_very_big_number<< endl;
    
    //Floating Point
    float car_payment {401.68};
    cout << "My Car Payment is " << car_payment << endl;

    //Larger sized number
    double pi {3.1415};
    cout << "The value of pi is close to " << pi << endl;

    //Very Large sized number
    long double large_num {2.7e120};
    cout << "A better approximation of pi is " << large_num << endl;

    //Boolean Type
    bool game_over {false};
    bool game_start {true};
    cout << "The value of game over is " << game_over << endl;
    cout << "The value of game start is " << game_start << endl;

    //Example of an OVERFLOW
    short num1 {3000};
    short num2 {100};
    short product {num1 * num2};
    cout << "The product of the numbers is " << product << endl;

}