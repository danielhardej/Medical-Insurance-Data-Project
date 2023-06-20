#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <sstream> 

using namespace std;

string openCsvFile() {
    // Prompt the user to select a CSV file
    cout << "Enter the path to the CSV file: ";

    // Read the file path from the console
    string filePath;
    getline(cin, filePath);

    // set a default file path if no file path is provided
    if (filePath.empty()) {
        filePath = "/Users/danielhardej/Documents/GitHub/codecademy/Data-Science-NLP-Specialization/6 Portfolio Project: Medical Insurance/data/insurance.csv";
    }

    // Return the file path
    return filePath;
}

vector<vector<string> > readCsvFile(const string& filePath) {
    // Open the CSV file for reading
    ifstream file(filePath);

    // Read the contents of the CSV file line by line
    vector<vector<string> > data;
    string line;
    while (getline(file, line)) {
        // Create a vector of strings representing the fields in the line
        vector<string> fields;

        // Create a stringstream from the line
        stringstream ss(line);

        // Create a string variable to store each field in the line
        string field;

        // Use getline to extract each field
        while (getline(ss, field, ',')) {
            // Add the field to the vector of fields
            fields.push_back(field);
        }

        // Add the vector of fields to the vector of data
        data.push_back(fields);
    }

    // Close the file
    file.close();

    // Return the data vector
    return data;
}

vector<string> getColumnNames(const string& filePath) {
    // Open the CSV file for reading
    ifstream file(filePath);

    // Read the first line of the CSV file
    string line;
    getline(file, line);

    // Split the line into fields using a comma as the delimiter
    vector<string> columnNames;
    string field;
    for (size_t i = 0; i < line.size(); i++) {
        char c = line[i];
        if (c == ',') {
            columnNames.push_back(field);
            field.clear();
        } else {
            field += c;
        }
    }
    columnNames.push_back(field);

    // Close the file
    file.close();

    // Return the column names vector
    return columnNames;
}

vector<double> getColumn(const string& columnName) {
    // Prompt the user to select a CSV file
    string filePath = openCsvFile();

    // Read the contents of the CSV file
    vector<vector<string> > data = readCsvFile(filePath);

    // Get the column names from the first row of the data
    vector<string> columnNames = getColumnNames(filePath);

    // Find the index corresponding to the column name
    int index = 0;
    for (size_t i = 0; i <= columnNames.size(); i++) {
        if (columnNames[i] == columnName) {
            index = i;
            break;
        }
    }

    // Create a vector of doubles representing the column data
    vector<double> columnData;

    // check if column data is numeric or not
    bool isNumeric = true;
    for (size_t i = 0; i < data.size(); i++) {
        vector<string> row = data[i];
        string value = row[index];
        for (size_t j = 0; j < value.size(); j++) {
            char c = value[j];
            if (!isdigit(c) && c != '.') {
                isNumeric = false;
                break;
            }
        }
    }

    if (isNumeric) {

        // Add the data in the column to the vector of doubles
        for (size_t i = 0; i < data.size(); i++) {
            vector<string> row = data[i];
            string value = row[index];
            columnData.push_back(stod(value));
        }

    } else

    
    

    // Return the column data vector
    return columnData;
}