#include <iostream>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;
    int arr1[n+m];
    int arr2[m];

    for(int i = 0; i < n; i++)
        cin >> arr1[i];

    for(int i = 0; i < m; i++)
        cin >> arr2[i];


    int i, j, k;
    i = n - 1;
    j = m - 1;
    k = n + m - 1;


    while(i >= 0 && j >= 0){

        if(arr1[i] > arr2[j]){
            arr1[k] = arr1[i];
            i--;
        }
        
        else{
            arr2[k] = arr1[j];
            j--;
        }
        k--;

    }


    
    for(int i = 0; i < n + m; i++)
        cout << arr1[i] << " ";

    cout << endl;

    

    


}