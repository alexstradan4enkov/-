#include <iostream>
#include <vector>
#include <limits>

using namespace std;

// Функция для нахождения максимума в векторе
int findMax(const vector<int>& numbers) {
if (numbers.empty()) {
return numeric_limits<int>::min();
}

`
int max = numbers[0];
for (size_t i = 1; i < numbers.size(); i++) {
    if (numbers[i] > max) {
        max = numbers[i];
    }
}
return max;

}

int main() {
int count;
cout << "Введите количество элементов в массиве: ";
cin >> count;

if (count <= 0) {
    cout << "Количество элементов должно быть положительным!" << endl;
    return 1;
}

vector<int> numbers(count);
cout << "Введите элементы массива:" << endl;

for (int i = 0; i < count; i++) {
    cout << "Элемент " << (i + 1) << ": ";
    cin >> numbers[i];
}

int maxValue = findMax(numbers);
if (maxValue != numeric_limits<int>::min()) {
    cout << "Максимальное значение: " << maxValue << endl;
} else {
    cout << "Вектор пуст!" << endl;
}

return 0;

}