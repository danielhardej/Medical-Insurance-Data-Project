#include <iostream>
#include <string>
#include <vector>

using namespace std;


// write a function that takes a string and returns the string reversed
string reverseString(string str) {
    string reversedString;
    for (int i = str.size() - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            reversedString.insert(reversedString.end(), ' ');
        } else {
            reversedString += str[i];
        }
    }
    return reversedString;
}

double some_function(vector<double> vec) {
    int last_element_index = vec.size() - 1; // position of vector last element
    double last_elment_vector = vec.at(last_element_index); // get vector element 
    return last_elment_vector; // returns desired value
}

int main() {
    cout << "Hello World!\n";
    // prompt the user for a string input
    cout << "Enter a string: ";
    string str;
    cin >> str;
    cout << "Variable type is: " << typeid(str).name() << endl;
    string reversedString = reverseString(str);
    cout << "The reversed string is: " << reversedString << endl;

    // create a vector of doubles
    vector<double> vect;
    vect.push_back(1.0);
    vect.push_back(2.0);
    vect.push_back(3.0);
    vect.push_back(4.0);
    vect.push_back(5.0);
    cout << "The vector is: " << endl;
    for (int i = 0; i < vect.size(); i++) {
        cout << vect[i] << " ";
    }
    cout << endl;
    cout << "The last element of the vector is: " << some_function(vect) << endl;

    cout << "Goodbye World!\n";

    return 0;

}