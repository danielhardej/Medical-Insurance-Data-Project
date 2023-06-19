#include <fstream>
#include <string>
#include <vector>
#include <iostream>

#include <string>
#include <iostream>

std::string openCsvFile() {
    // Prompt the user to select a CSV file
    std::cout << "Enter the path to the CSV file: ";

    // Read the file path from the console
    std::string filePath;
    std::getline(std::cin, filePath);

    // set a default file path if no file path is provided
    if (filePath.empty()) {
        filePath = "/Users/danielhardej/Documents/GitHub/codecademy/Data-Science-NLP-Specialization/6 Portfolio Project: Medical Insurance/data/insurance.csv";
    }

    // Return the file path
    return filePath;
}

std::vector<std::vector<std::string> > readCsvFile(const std::string& filePath) {
    // Open the CSV file for reading
    std::ifstream file(filePath);

    // Read the contents of the CSV file line by line
    std::string line;
    std::vector<std::vector<std::string> > data;
    while (std::getline(file, line)) {
        // Split the line into fields using a comma as the delimiter
        std::vector<std::string> fields;
        std::string field;
        for (size_t i = 0; i < line.size(); i++) {
            char c = line[i];
            if (c == ',') {
                fields.push_back(field);
                field.clear();
            } else {
                field += c;
            }
        }
        fields.push_back(field);

        // Add the fields to the data vector
        data.push_back(fields);
        //print the line of data
        // std::cout << line << std::endl;
    }

    // Close the file
    file.close();

    // Return the data vector
    return data;
}

std::vector<std::string> getColumnNames(const std::string& filePath) {
    // Open the CSV file for reading
    std::ifstream file(filePath);

    // Read the first line of the CSV file
    std::string line;
    std::getline(file, line);

    // Split the line into fields using a comma as the delimiter
    std::vector<std::string> columnNames;
    std::string field;
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

std::vector<double> getColumn(const std::string columnName) {
    // Prompt the user to select a CSV file
    std::string filePath = openCsvFile();

    // Read the contents of the CSV file
    std::vector<std::vector<std::string> > data = readCsvFile(filePath);

    // Get the column names from the first row of the data
    std::vector<std::string> columnNames = data[0];

    // Find the index corresponding to the column name
    int columnIndex = -1;
    for (size_t i = 0; i < columnNames.size(); i++) {
        if (columnNames[i] == columnName) {
            columnIndex = i;
            break;
        }
    }

    // Extract the column data from the data vector
    std::vector<double> columnData;
    for (size_t i = 1; i < data.size(); i++) {
        std::vector<std::string> row = data[i];
        std::string cell = row[columnIndex];
        double cellValue = std::stod(cell);
        columnData.push_back(cellValue);
    }

    // Return the column data vector
    return columnData;
}