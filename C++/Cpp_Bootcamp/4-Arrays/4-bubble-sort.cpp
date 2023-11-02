// Bubble Sort

#include <iostream>
#include <climits>
using namespace std;
int main(){

    int arr[] = {5, 3, 6, 22, 55, 7, 24, 36, 99, 1234 ,-223, 56, -329, -2};

    int len = sizeof(arr) / sizeof(arr[0]);
    int swap = 1;
    while(swap == 1){
        swap = 0;
        for(int i = 0; i < len - 1; i++){
            int temp;
            if(arr[i] > arr[i+1]){
                swap = 1;
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

    cout << "Sorted array : " << endl;

    for(int i = 0; i < len; i++){
        std::cout << arr[i] << endl;
    }
}