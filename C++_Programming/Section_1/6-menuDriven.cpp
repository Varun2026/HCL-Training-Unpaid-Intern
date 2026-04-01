#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "\n1. Say Hello\n";
        cout << "2. Add numbers\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Hello\n";
        } else if (choice == 2) {
            int x, y;
            cout << "Enter two numbers: ";
            cin >> x >> y;
            cout << "Sum: " << x + y << endl;
        }

    } while (choice != 3);

    return 0;
}