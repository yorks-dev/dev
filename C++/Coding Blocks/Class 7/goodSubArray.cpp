#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int k;
    cin >> k;
    int start_sum[n];
    start_sum[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        start_sum[i] = start_sum[i-1] + a[i];
    }

    // Taking reminder for every number
    for(int i = 0; i < n; i++){
        start_sum[i] %= k;
    }

    int freq[k];  // reminder possible diving by k is 0 -> k-1 sp total is k
    for(int i = 0; i < n; i++){
        freq[start_sum[i]]++;  
    }    

    //add contribution for every remainder
    int ans = freq[0];
    for(int i = 0; i < k; i++){
        int x = freq[i];
        ans+=(x*(x-1)/2);
    }

    cout << ans << endl;
}

