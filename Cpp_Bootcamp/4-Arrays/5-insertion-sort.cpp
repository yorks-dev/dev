#include <iostream>
using namespace std;

int main(){
    
    int arr[] = {5, 3, 1, 22, 55, 7, 24, 36, 99, 1234 ,-223, 56, -329, -2};
    int len = sizeof(arr) / sizeof(arr[0]);

    for(int i = 1; i < len; i++){
        int j = i - 1;
        int bucket = arr[i];
        while(j >= 0 && arr[j] > bucket){
            arr[j+1] = arr[j] ;
            j--;
        }
        arr[j + 1 ] = bucket;
    }

    cout << "Sorted array : " << endl;

    for(int i = 0; i < len; i++){
        std::cout << arr[i] << std::endl;
    }
}