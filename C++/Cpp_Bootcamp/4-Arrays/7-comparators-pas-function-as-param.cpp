#include <iostream>
using namespace std;

bool compare(int a, int b){
    cout << "Comparing " << a << " and " << b << endl;
    return a > b;
}

void bubble_sort(int arr[], int len, bool (&comp) (int a, int b)){

    int swap = 1;
    while(swap == 1){
        swap = 0;
        for(int i = 0; i < len - 1; i++){
            int temp;
            if(comp(arr[i] , arr[i+1])){
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

int main(){
    
    int arr[] = {5, 3, 6, 22, 55, 7, 24, 36, 99, 1234 ,-223, 56, -329, -2};
    int len = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, len, compare);

}