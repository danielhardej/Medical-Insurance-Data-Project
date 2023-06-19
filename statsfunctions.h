#ifndef STATSFUNCTIONS_H
#define STATSFUNCTIONS_H
#include <string>
#include <vector>

double calculate_mean(const std::vector<double>& vec);
double calculate_median(const std::vector<double>& vec);
double calculate_variance(const std::vector<double>& vec);
double calculate_standard_deviation(const std::vector<double>& vec);
double calculate_min(const std::vector<double>& vec);
double calculate_max(const std::vector<double>& vec);

#endif // STATSFUNCTIONS_H


