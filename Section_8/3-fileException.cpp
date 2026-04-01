#include <iostream>
#include <fstream>

void openFile(std::string filename) {
    std::ifstream file(filename);
    if (!file) throw std::string("Cannot open file");
}

int main() {
    try {
        openFile("nonexistent.txt");
    } catch (const std::string& e) {
        std::cout << e << std::endl;
    }
    return 0;
}