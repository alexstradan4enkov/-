#include <iostream>
#include <vector>
#include <limits>

using namespace std;

// Функция для нахождения максимума в векторе
int findMax(const vector<int>& numbers) {
    if (numbers.empty()) {
        return numeric_limits<int>::min();
    }

    int max = numbers[0];
    for (size_t i = 1; i < numbers.size(); i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    return max;
}