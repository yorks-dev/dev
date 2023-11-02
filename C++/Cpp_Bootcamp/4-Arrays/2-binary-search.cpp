#include <iostream>
using namespace std;

int main(){

    int arr[] = {1, 4, 6, 8, 22, 56, 345, 2245, 22344, 34676, 101082, 10101111, 1898232988};
    cout << "Enter the number : ";
    int num;
    cin >> num;

    int left = 0, right = sizeof(arr)/sizeof(arr[0]), mid;
    int flag = 0;
    
    while(left <= right){
        
        mid = (left + right) / 2;
        
        if(arr[mid] == num){
            cout << "FOUND " << endl;
            return 0;
        }

        if(arr[mid] > num){
            right = mid - 1;
        }
        else {
            left = mid + 1;
        } 
    }
    
    cout << "NOT FOUND" <<  endl;
    return 1;

}