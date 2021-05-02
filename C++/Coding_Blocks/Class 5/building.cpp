#include <iostream>
#include <climits>
using namespace std;

int main() {

    int num;
    cout << "How many Buildings ?" << endl;
    cin >> num; 
    
    int arr[num] {0};
    for (size_t i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    
    int max = INT_MIN, sun_num = 0;
    for (size_t  = 0; i < num; i++)
    {
        if(arr[i] > max){
            sun_num ++;
            max = arr[i];
        }

    }
    cout << sun_num << endl;
}