#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
unordered_map<int, int> countMultiples(const vector<int>& numbers) {
    unordered_map<int, int> count;
    for (int num : numbers) {
        for (int i = 1; i <= 9; ++i) {
            if (num % i == 0) {
                ++count[i];
            }
        }
    }
    return count;
}

int main() {
    vector<int> numbers;
    int inputNumber;
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;

    cout << "Enter the array elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> inputNumber;
        numbers.push_back(inputNumber);
    }

    unordered_map<int, int> count = countMultiples(numbers);

    cout << "Output: " << endl;
    for (int i = 1; i <= 9; ++i) {
        cout << i << ": " << count[i] << ", ";
    }
    cout << endl;

    return 0;
}
