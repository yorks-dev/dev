
/** Sorting - Merge Sort (Recursion)

[4, 5, 2, -1, 0] 

PROCESS OF MERGE SORT :
1. Divide Array
2. Merge sorted Array.

A) 

We divide the array into 2 parts.

-> We will continue breaking arrays untill the size of the divisions are 1 (Base case)

[4, 5, 2, -1, 0] 

    [4, 5, 2]           and             [-1, 0]
[4, 5]  and   [2]                       [-1], [0]
[4], [5] and [2]                 [-1], [0]

B) MERGE

Now say we have 2 sorted arrays we will merge.
[4, 5, 6]  and [3, 5, 5] and empty array (6 len) [ , , , , , ]

i = 0, j = 0, k = 0;  (3 pointers at the oth index of the 3 arrays.)

while(both have elements){
    // DO
}

-----------------------
Merge sort code

MergeSort(int arr[], int s, int e){
    if(s == e)
        return;
    mid = (s + e)/2;
    MergeSort(arr, s, end);  // Sort the left half.
    MergeSort(arr, mid+1, end); // Sort the right half.
    Merge(arr, s, mid, e);
}

**/


#include <iostream>
using namespace std;

void Merge(int arr[], int s, int mid, int e){
    // Here we have a single array, we break into 2 arrays.

    int l_len = mid - s +1;
    int r_len = e - mid;
    int l[l_len], r[r_len];

    for(int i = 0; i < l_len; i++){
        l[i] = arr[s + i];
    }

    for(int i = 0; i < r_len; i++){
        r[i] = arr[mid + 1 + i];
    }
    
    int k = s;  // K is for the final array.
    int i = 0, j = 0;
    
    
    while(i < l_len && j < r_len){
        if(l[i] <= r[i]){
            arr[k] = l[i];
            i++;
        }
        else{
            arr[k] = r[i];
            j++;
        }
        k++;
    }

    // add remaining elements of left half.
    while(i < l_len){
        arr[k] = l[i];
        i++;
        k++;
    }

    while(j < r_len){
        arr[k] = r[i];
        j++;
        k++;
    }
}


void MergeSort(int arr[], int s, int e){

    if(s == e)
        return;
    int mid = (s + e) / 2;
    
    MergeSort(arr, s, mid);
    MergeSort(arr, mid + 1, e);
    Merge(arr, s, mid, e);
}