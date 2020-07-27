//Random Number Generator (For a Dice Game)

#include <iostream>
#include <ctime>    //required for time()
#include <cstdlib>  //Required for rand()

using namespace std;

int main() {

    int random_num {};
    size_t count {10};  //number of random numbers needed
    int min {1};
    int max {6};

    cout << "RAND_MAX on my system is " << RAND_MAX << endl;

    srand(time(nullptr));   //Used to change the sequence the random numbers are generated

    for(size_t i{0}; i <= count; i++)
    {   
        random_num = rand() % (max - min + 1) + min;
        cout << random_num << endl;
    }

}