#ifndef CSVFUNCTIONS_H
#define CSVFUNCTIONS_H

#include <string>
#include <vector>

using namespace std;

string openCsvFile();
vector<vector<string> > readCsvFile(const string& filePath);
vector<string> getColumnNames(const string& filePath);
vector<double> getColumn(const string& columnName);

#endif // CSVFUNCTIONS_H