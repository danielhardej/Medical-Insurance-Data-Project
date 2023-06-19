#include <vector>
#include <algorithm>
#include <cmath>



double calculate_mean(const std::vector<double>& vec) {
    double sum = 0.0;
    for (const auto& value : vec) {
        sum += value;
    }
    return sum / static_cast<double>(vec.size());
}

double calculate_median(const std::vector<double>& vec) {
    std::vector<double> copy = vec;
    std::sort(copy.begin(), copy.end());
    if (copy.size() % 2 == 0) {
        return (copy[copy.size() / 2 - 1] + copy[copy.size() / 2]) / 2.0;
    } else {
        return copy[copy.size() / 2];
    }
}

double calculate_variance(const std::vector<double>& vec) {
    double mean = calculate_mean(vec);
    double sum = 0.0;
    for (const auto& value : vec) {
        sum += (value - mean) * (value - mean);
    }
    return sum / static_cast<double>(vec.size());
}

double calculate_standard_deviation(const std::vector<double>& vec) {
    return std::sqrt(calculate_variance(vec));
}

double calculate_min(const std::vector<double>& vec) {
    double min = vec[0];
    for (const auto& value : vec) {
        if (value < min) {
            min = value;
        }
    }
    return min;
}

double calculate_max(const std::vector<double>& vec) {
    double max = vec[0];
    for (const auto& value : vec) {
        if (value > max) {
            max = value;
        }
    }
    return max;
}