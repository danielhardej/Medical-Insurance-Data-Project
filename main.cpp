// imports
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "csvfunctions.h"

using namespace std;

int main() {
    // Prompt the user to select a CSV file
    string filePath = openCsvFile();

    // Read the contents of the CSV file
    vector<vector<string> > data = readCsvFile(filePath);

    int n_lines;
    cout << "How many lines of data would you like to print? ";
    cin >> n_lines;
    // Print the first n lines of the data
    for (int i = 0; i <= n_lines; i++) {
        vector<string> line = data[i];
        for (int j = 0; j < line.size(); j++) {
            cout << line[j] << " ";
        }
        cout << endl;
    }

    std::cout << "The CSV file contains " << data.size() << " rows." << std::endl;
    std::cout << "The CSV file contains " << data[0].size() << " columns." << std::endl;

    // test the getColumnNames function
    vector<string> columnNames = getColumnNames(filePath);
    for (size_t i = 0; i <= columnNames.size(); i++) {
        cout << columnNames[i] << std::endl;
    }

    // test the getColumn function
    cout << "Enter a column name: ";
    string columnName;
    cin >> columnName;
    vector<double> column = getColumn(columnName);
    for (size_t i = 0; i <= n_lines; i++) {
        cout << column[i] << std::endl;
    }

    return 0;
}