#include <iostream>
#include <vector>
using namespace std;

int main() {

    const vector <int> vec {1,2,3,4,5,6,7,8,9,22,33,44,0,88,66,34};

    int count {0};
    for(auto i : vec)
    {
        if(i == -99) break;
        count ++;
    }
    if(count == 0)
        count = vec.size();
    
    cout << count << endl;
}