#ifndef CSVFUNCTIONS_H
#define CSVFUNCTIONS_H

#include <string>
#include <vector>

std::string openCsvFile();
std::vector<std::vector<std::string> > readCsvFile(const std::string& filePath);
std::vector<std::string> getColumnNames(const std::string& filePath);

#endif // CSVFUNCTIONS_H