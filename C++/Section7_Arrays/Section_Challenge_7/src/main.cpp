#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector <int> vector1, vector2;
    vector1.push_back(10);
    vector1.push_back(20);

    vector2.push_back(100);
    vector2.push_back(200);

    vector<vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    //Printing the 2D Vector
    cout << vector_2d.at(0).at(0) << '\t' << vector_2d.at(0).at(1) << endl; 
    cout << vector_2d.at(1).at(0) << '\t' << vector_2d.at(1).at(1) << endl; 
    cout << "----------------------------------------" << endl;
    vector1.at(0) = 1000;

    //Printing the 2D Vector again
    cout << vector_2d.at(0).at(0) << '\t' << vector_2d.at(0).at(1) << endl; 
    cout << vector_2d.at(1).at(0) << '\t' << vector_2d.at(1).at(1) << endl; 
    cout << "----------------------------------------" << endl;
    cout << vector1.at(0) << '\t' << vector1.at(1) << endl;

    return 0;
}
