#include <iostream>
#include <vector>

void printDiag(int x) {
    std::cout << x << std::endl;
}

void printDiag(double x) {
    std::cout << x << std::endl;
}

void printDiag(std::string x) {
    std::cout << x << std::endl;
}

void printDiag(std::vector<int> x) {
    for (int i : x) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    printDiag(5);
    printDiag(3.14);
    printDiag("hello");
    printDiag(std::vector<int>{1, 2, 3});
    return 0;
}