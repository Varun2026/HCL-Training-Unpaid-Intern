#include <iostream>

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return a / b; }

int main() {
    double (*op)(double, double);
    int choice;
    double a, b;
    std::cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    std::cin >> choice;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    switch (choice) {
        case 1: op = add; break;
        case 2: op = subtract; break;
        case 3: op = multiply; break;
        case 4: op = divide; break;
    }
    std::cout << op(a, b) << std::endl;
    return 0;
}