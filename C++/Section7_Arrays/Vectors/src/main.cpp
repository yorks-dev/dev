#include <iostream>
#include <vector>  // Dont forget this one
 using namespace std;

 int main() {

    // vector <char> vowels;      //empty
    // vector <char> vowels (5);  // 5 elements initialised to 0
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
    cout << vowels[0] << endl;
    cout << vowels[5] << endl ;  // Dumps gurbage value as out of bound check noot there
    cout << "---------------------------------" << endl;

    vector <int> test_scores (3); // all of the 3 elements initialised to 0
    vector <int> test_scores_2 (3, 100); // all of the 3 elements initialised to 100
    test_scores_2.at(1) = 98;
    test_scores_2.at(2) = 89;

    cout << "TEST SCORES USING ARRAY SYNTAX" << endl; 
    cout << test_scores_2[0] << endl;
    cout << test_scores_2[1] << endl;
    cout << test_scores_2[2] << endl;
    // cout << test_scores_2[5] << endl;  // This wont show any error as there is no bounds check and this is bad
    cout << "---------------------------------" << endl;

    cout << "TEST SCORES USING VECTOR SYNTAX" << endl;
    cout << test_scores_2.at(0) << endl;
    cout << test_scores_2.at(1) << endl;
    cout << test_scores_2.at(2) << endl;
    // cout << test_scores_2.at(5) << endl;   This will show the error

    cout << "There are " << test_scores_2.size() << " in the array" << endl;
    cout << "---------------------------------" << endl;

    cout << "ENTER 3 INTEGERS SEPERATED BY A SPACE " << endl;
    vector <int> integer_arr (3);
    cin >> integer_arr.at(0) >> integer_arr.at(1) >> integer_arr.at(2); 
    cout << "Vector Elements are : " << endl;
    cout << integer_arr.at(0) << '\t' << integer_arr.at(1) << '\t' <<  integer_arr.at(2) << endl;

    cout << "---------------------------------" << endl;

    cout << "ENTER AN INTEGER TO ADD TO THE ARRAY" << endl;
    int score_to_add {0};
    cin >> score_to_add;
    integer_arr.push_back(score_to_add);
    cout << "NEW MODIFIED VECTOR WITH ADDED SCORE IS :" << endl;
    cout << integer_arr.at(0) << '\t' << integer_arr.at(1) << '\t' <<  integer_arr.at(2) << '\t' <<  integer_arr.at(3) << endl;
    cout << "There are " << integer_arr.size() << " in the array" << endl;
}   