#include <iostream>

using namespace std;

unsigned long long factorial_recursive(int n) {
    // Base case: 0! and 1! are both 1
    if (n <= 1) {
        return 1;
    }
    // Recursive call
    return n * factorial_recursive(n - 1);
}

int main() {
    int num = 5;

    cout << "Calculating Factorial of " << num << ":" << endl;
    cout << "Recursive result: " << factorial_recursive(num) << endl;

    return 0;
}