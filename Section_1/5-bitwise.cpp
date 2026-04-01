#include <iostream>
using namespace std;

int main() {
    int a = 7, b = 6;

    cout << "AND: " << (a & b) << endl;
    cout << "OR: " << (a | b) << endl;
    cout << "XOR: " << (a ^ b) << endl;
    cout << "Left Shift a: " << (a << 1) << endl;
    cout << "Right Shift a: " << (a >> 1) << endl;

    return 0;
}