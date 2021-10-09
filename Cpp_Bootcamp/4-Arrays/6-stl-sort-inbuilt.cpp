#include <iostream>
#include <algorithm> // has the sot function
using namespace std;

int main(){

    int arr[] = {5, 3, 6, 22, 55, 7, 24, 36, 99, 1234 ,-223, 56, -329, -2};
    int len = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + len);

    for(int i = 0; i < len; i++){
        std::cout << arr[i] << std::endl;
    }
}