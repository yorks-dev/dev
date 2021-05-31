#include <iostream>
using namespace std;

int prime_check(int a){
    int flag = 0;
    for(int i = 2; i < a; i++) {
        if( a % i == 0){
            flag = 1;
            break;
        }
    }
    
    if(flag == 1) return 0;
    else return 1;
}


int main() {
    
    int n;
    cin >> n;

   for(int i=2; i <=n; i++){
      if(prime_check(i) == 1)
          cout << i << endl;
   } 
}
