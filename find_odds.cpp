#include <iostream>
#include <vector>

std::vector<int> findOddNumbers(int arr[], int size) {
    std::vector<int> oddNumbers;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            oddNumbers.push_back(arr[i]);
        }
    }
    return oddNumbers;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::vector<int> oddNumbers = findOddNumbers(arr, size);
    for (int number : oddNumbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;
    return 0;
}