// Selection Sort

#include <iostream>
#include <climits>
using namespace std;
int main(){

    int arr[] = {5, 3, 6, 22, 55, 7, 24, 36, 99, 1234 ,-223, 56, -329, -2};

    int start = 0;
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << len << endl;
    while(start < len - 1){

        int min = INT16_MAX;
        int index = 0;
        for(int i = start; i < len; i++){
            if(arr[i] < min){
                index = i;
                min = arr[i];
            }
        }
        int temp;
        temp = arr[start];
        arr[start] = min;
        arr[index] = temp;

        start ++;
        
    }

    cout << "Sorted array : " << endl;

    for(int i = 0; i < len; i++){
        std::cout << arr[i] << std::endl;
    }
}