#include <Cocoa/Cocoa.h>
#include <fstream>
#include <string>
#include <vector>

void readCSV(const std::string& filePath) {
    // Open the CSV file for reading
    std::ifstream file(filePath);

    // Check if the file was opened successfully
    if (!file.is_open()) {
        printf("Failed to open file: %s\n", filePath.c_str());
        return;
    }

    // Read the contents of the CSV file line by line
    std::string line;
    std::vector<std::vector<std::string>> data;
    while (std::getline(file, line)) {
        // Split the line into fields using a comma as the delimiter
        std::vector<std::string> fields;
        std::string field;
        for (char c : line) {
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
    }

    // Close the file
    file.close();

    // Do something with the data
    // For example, you could print the data to the console
    for (const auto& row : data) {
        for (const auto& field : row) {
            printf("%s, ", field.c_str());
        }
        printf("\n");
    }
}

void openFile() {
    // Create an instance of the NSOpenPanel class
    NSOpenPanel* openPanel = [NSOpenPanel openPanel];

    // Set the allowed file types to CSV files
    NSArray* allowedFileTypes = [NSArray arrayWithObject:@"csv"];
    [openPanel setAllowedFileTypes:allowedFileTypes];

    // Display the file dialog box and get the selected file
    if ([openPanel runModal] == NSModalResponseOK) {
        // The user selected a file, so do something with it
        // For example, you could print the file path to the console
        NSString* filePath = [[openPanel URL] path];
        printf("Selected file: %s\n", [filePath UTF8String]);
    }
}

