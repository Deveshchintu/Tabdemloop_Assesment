#include <iostream>
#include <string>
using namespace std;
class Calculator {
    double a, b;
    string operation;

public:
    Calculator(double num1, double num2, const string& op) : a(num1), b(num2), operation(op) {}

    double calculate() {
        if (operation == "addition") return a + b;
        if (operation == "subtraction") return a - b;
        if (operation == "multiplication") return a * b;
        if (operation == "division") return (b != 0) ? a / b : (cerr << "Error: Division by zero!" << endl, 0.0);
        cerr << "Invalid operation!" << endl;
        return 0.0;
    }
};

int main() {
    double num1, num2;
    string op;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operation (addition, subtraction, multiplication, division): ";
    cin >> op;
    Calculator calc(num1, num2, op);
    cout << "Result: " << calc.calculate() << endl;
    return 0;
}
