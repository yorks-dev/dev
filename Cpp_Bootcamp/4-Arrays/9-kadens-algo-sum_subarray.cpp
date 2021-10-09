#include <iostream>
using namespace std;

int main(){
    int arr[] = {-1, -2, 3, 1, -1};

    int sum_ending_here = 0, max_so_far = INT16_MIN;

    // KADENS ALGO does not work for all -ve (as sum will be shown as 0), so we apply a new loop to check for
    // all -ve and print it at first.

    // Dealing with all -ve case.
    bool is_positive = false;
    int negitive_max = INT16_MIN;
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        if(arr[i] > 0){
            is_positive = true;
            break;
        }
        if(arr[i] > negitive_max)
            negitive_max = arr[i];
    }
    // Checking if all negitive 
    if(is_positive == false){
        cout << negitive_max << endl;
    }
    else{

        // KADEN'S ALGORITHM
        for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
        sum_ending_here += arr[i];
        if(sum_ending_here < 0){
            sum_ending_here = 0;
        }

        if(sum_ending_here > max_so_far) 
            max_so_far = sum_ending_here;
    }

    cout << max_so_far << endl;
    }

    
}

