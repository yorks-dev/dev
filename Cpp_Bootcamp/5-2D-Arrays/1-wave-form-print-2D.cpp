#include <iostream>
using namespace std;

int main(){
    
    int arr2D[4][5] = {
        {0, 1, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}, 
        {16, 17, 18, 19, 20}
    };

    int rows = sizeof(arr2D) / sizeof(arr2D[0]), cols = sizeof(arr2D[0])/sizeof(arr2D[0][0]);
    for(int i = 0; i < cols; i++){
        if(i % 2 != 0){ // odd
            for(int j = rows - 1; j >= 0 ; j--){
                cout << arr2D[j][i] << " ";
            }
        }else{
             for(int j = 0; j < rows; j++){
                 cout << arr2D[j][i] << " ";
             }
        }
        cout << endl;

    }

}