#include <iostream>
#include <climits>  // for max and min
using namespace std;

int main(){

    int arr[10] = {0};
    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }

    int largest = INT16_MAX;
    int least = INT16_MIN;
    for(int i = 0; i < 10; i++){
        if(arr[i] > least) {
            least = arr[i];
        }
        else if(arr[i] < largest){
            largest = arr[i];
        }
    }

    cout << least << " " << largest << endl;
}