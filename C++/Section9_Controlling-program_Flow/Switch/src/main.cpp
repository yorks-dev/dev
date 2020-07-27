#include <iostream>
using namespace std;

int main() {
    
    bool stop {0};
    while(stop == 0)
    {
        cout << "Enter the grade you want" << endl;
        char grade {};
        cin >> grade;
        switch (grade)
        {
            case 'a' :
            case 'A' : 
            {
                cout << "Yo !! You can go party" << endl;
                stop = 1;
            }
                break;
            case 'b' :
            case 'B' :
            {
                cout << "You have potential to score A .. Study a little bit hard" << endl;
                stop = 1;
                break;
            }
            case 'c' :
            case 'C' :
            {
                cout << "Honey, you gotta study very very hard if you dont want to get your ass wooped" << endl;
                stop = 1;
            }
                break;
            case 'd' :
            case 'D' :
            {
                cout << "Really !! You know Mom's gonna woope your ass so hard honey!!" << endl;
                stop = 1;
            }
                break;
            case 'f' :
            case 'F' :
            {
                cout << "What the fuck !!" << endl;
                cout << "Did you miss type yo ? say 'y' or 'n'" << endl;
                char typo {};
                cin >> typo;
                if(typo == 'y')
                {
                    cout << "Thank God" << endl;
                }
                else
                {
                    cout << "Come to the principal's office ... You are getting detention and a nice ass wooping infront of your class !!" << endl;
                    stop = 1;
                }
                
            }
            break;
            default :
                cout << "Invalid Input" << endl;
        }
    }
}