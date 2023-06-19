// imports
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "csvfunctions.h"
#include "statsfunctions.h"



int main() {
    // Prompt the user to select a CSV file
    std::string filePath = openCsvFile();

    // Read the contents of the CSV file
    std::vector<std::vector<std::string> > data = readCsvFile(filePath);

    // Print the first 10 lines of the data
    for (int i = 0; i < 10; i++) {
        for (size_t j = 0; j < data[i].size(); j++) {
            std::cout << data[i][j-1] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "The CSV file contains " << data.size() << " rows." << std::endl;
    std::cout << "The CSV file contains " << data[0].size() << " columns." << std::endl;

    // test the getColumnNames function
    std::vector<std::string> columnNames = getColumnNames(filePath);
    for (size_t i = 0; i < columnNames.size(); i++) {
        std::cout << columnNames[i] << std::endl;
    }

    return 0;
}