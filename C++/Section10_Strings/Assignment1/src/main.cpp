#include <iostream>
#include <string>
#include<bits/stdc++.h> 
using namespace std;


int main()
{
    string s {};
    cin >> s;
    size_t len {s.length()};

  for(size_t i{0}; i < len; i++)
    {
        string space (len - (i+1), ' ');
        string first_part {s.substr(0,i+1)};
        cout << space << first_part;
        reverse(first_part.begin(), first_part.end());
        string second_part {first_part.substr(1)};
        cout << second_part << endl;        
    }

    return 0;
}
