#include <iostream>
#include <cmath>
using namespace std;

class Calculator {
public:
    double add(double a, double b) { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double multiply(double a, double b) { return a * b; }
    double divide(double a, double b) {
        if (b != 0) return a / b;
        else {
            cout << "Error: Division by zero!" << endl;
            return NAN;
        }
    }
};

int main() {
    Calculator calc;
    double num1 = 10, num2 = 5;

    cout << "Penjumlahan: " << calc.add(num1, num2) << endl;
    cout << "Pengurangan: " << calc.subtract(num1, num2) << endl;
    cout << "Perkalian: " << calc.multiply(num1, num2) << endl;
    cout << "Pembagian: " << calc.divide(num1, num2) << endl;

    return 0;
}