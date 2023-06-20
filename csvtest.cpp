#include <iostream> 
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

#include <iostream> 
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main () {
    ifstream inputFile;
    inputFile.open("/Users/danielhardej/Documents/GitHub/codecademy/Data-Science-NLP-Specialization/6 Portfolio Project: Medical Insurance/data/insurance.csv");

    cout << "Hello World!" << endl;

    string line = "";

    vector<string> columnNames;
    // get the first line of the file
    getline(inputFile, line);
    // create a stringstream from line
    stringstream ss(line);
    // get the column names
    string field;
    while (getline(ss, field, ',')) {
        columnNames.push_back(field);
    }
    // print the column names
    for (size_t i = 0; i < columnNames.size(); i++) {
        cout << columnNames[i] << endl;
    }


    int counter = 0;
    getline(inputFile, line);

    // print the first 10 lines of the file
    while (getline(inputFile, line) && counter < 10) {
        cout << line << endl;
        counter++;
    }

    // // prompt user to select a column
    // string columnName;
    // cout << "Enter a column name: ";
    // cin >> columnName;
    // // check if column name is valid
    // bool validColumn = false;
    // for (size_t i = 0; i < columnNames.size(); i++) {
    //     if (columnNames[i] == columnName) {
    //         validColumn = true;
    //         break;
    //     }
    // }

    // // get column index
    // int columnIndex = -1;
    // for (size_t i = 0; i < columnNames.size(); i++) {
    //     if (columnNames[i] == columnName) {
    //         columnIndex = i;
    //         break;
    //     }
    // }

    // // get column values
    // vector<string> columnValues;
    // while (getline(inputFile, line)) {
    //     stringstream ss(line);
    //     string field;
    //     for (int i = 0; i < columnIndex; i++) {
    //         getline(ss, field, ',');
    //     }
    //     getline(ss, field, ',');
    //     columnValues.push_back(field);
    // }

    // // print column values
    // for (size_t i = 0; i < columnValues.size(); i++) {
    //     cout << columnValues[i] << endl;
    // }

    return 0;
        
}
