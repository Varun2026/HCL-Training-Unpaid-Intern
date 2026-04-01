#include <iostream>
#include <fstream>

int main() {
    std::ifstream file("test.txt");
    int lines = 0;
    std::string line;
    while (std::getline(file, line)) {
        lines++;
    }
    file.close();
    std::ofstream file2("test.txt", std::ios::app);
    file2 << "\nTotal Lines: " << lines;
    file2.close();
    return 0;
}