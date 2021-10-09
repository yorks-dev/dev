#include <iostream>
#include <climits>
using namespace std;

void basic_approach(int arr[], int len){
    int max_sum = INT16_MIN;
    int start = 0, end = 0;

    for(int i = 0; i < len; i++){
        for(int j = i; j < len; j++){   // till this generated the index for printing.
            int sum = 0;
            for(int k = i; k <= j; k++){
                sum += arr[k];
            }
            if(sum > max_sum){
                max_sum = sum;
                start = i;
                end = j;
            }
        }
    }
    for(int p = start; p <= end; p++){
        cout << arr[p] << " "; 
    }
    cout << "\n" << max_sum << endl;
}

void cumulative_approach(int arr[], int len){
    int max_sum = INT16_MIN;
    
    // make the cumulative array;
    int cum_arr[len];
    int cum_sum = 0;
    for(int i = 0; i < len; i++){
        cum_sum += arr[i];
        cum_arr[i] = cum_sum;
    }

    // Finding sum;
    for(int i = 0; i < len; i++){
        int sum;
        for(int j = 0; j < len; j++){
            sum = cum_arr[j] - cum_arr[i - 1];
        }
        if(sum > max_sum){
            max_sum = sum;
        }
    }

    cout << "Max sum : " << max_sum << endl;
}

int main(){
    int arr[] = {1, 2, -4, 3, 21};
    // basic_approach(arr, sizeof(arr)/sizeof(arr[0]));
    cumulative_approach(arr, sizeof(arr)/sizeof(arr[0]));
}