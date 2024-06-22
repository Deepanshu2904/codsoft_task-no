// Code Soft Task (Calculator)

#include <iostream>

using namespace std;

// Function prototypes
double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);

int main() {
    char operation;
    double num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Select operation (+, -, *, /): ";
    cin >> operation;

    switch(operation) {
        case '+':
            cout << "Result: " << add(num1, num2);
            break;
        case '-':
            cout << "Result: " << subtract(num1, num2);
            break;
        case '*':
            cout << "Result: " << multiply(num1, num2);
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error! Division by zero.";
            } else {
                cout << "Result: " << divide(num1, num2);
            }
            break;
        default:
            cout << "Invalid operation";
    }

    return 0;
}

// Function definitions
double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    return x / y;
}