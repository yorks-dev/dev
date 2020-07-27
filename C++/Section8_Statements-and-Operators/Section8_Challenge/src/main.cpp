/**Section 8 Challenge - Cents to Dollars and breaks
* $1 = 100 cents
* 1 quater = 25 cents
* 1 dime = 10 cents
* 1 nickel = 5 cents
* 1penny = 1 cent 
**/

#include <iostream>
#include <vector>

using namespace std;

int main() {

      //Okish Solution
    
    // int amount_cents {0};
    // cout << "Enter an amount in cents : ";
    // cin >> amount_cents;

    // cout << "You can provide this change as follows:" << endl;
    // int dollars {0}, quaters {0}, dimes {0}, nickels {0}, pennies {0};
    // dollars = amount_cents / 100;
    // amount_cents %= 100;
    // quaters = amount_cents / 25;
    // amount_cents %= 25;
    // dimes = amount_cents / 10;
    // amount_cents %= 10;
    // nickels = amount_cents / 5;
    // amount_cents %= 5;
    // pennies = amount_cents;

    // cout << "dollars : " << dollars << endl;
    // cout << "quaters : " << quaters << endl;
    // cout << "dimes : " << dimes << endl;
    // cout << "nickels : " << nickels << endl;
    // cout << "pennies : " << pennies << endl;
    
   // Better Solution

    int amount_cents {0};
    cout << "Enter an amount in cents : ";
    cin >> amount_cents;
    cout << "You can provide this change as follows:" << endl;

    vector <int> per_value {100, 25, 10, 5, 1};
    vector <string> dollar_names {"dollars", "quaters", "dimes", "nickels", "pennies" };
    vector <int> number {};
    int i {0};

    if(amount_cents == 0)
        cout << "Come on .. Go Home" << endl;
    else
    {
        while(amount_cents > 0)
        {
            number.push_back(amount_cents / per_value.at(i));
            amount_cents %= per_value.at(i);
            i++;
        }
        int arr_ln {number.size()};
        for(int j = 0; j < arr_ln; j++)
        {
           cout << dollar_names.at(j) << " : " << number.at(j) << endl;
        }
    }
    
    return 0;
}

  
    