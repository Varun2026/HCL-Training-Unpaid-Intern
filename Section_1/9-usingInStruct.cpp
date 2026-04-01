#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
};

using stu = Student;

int main() {
    stu s;
    s.id = 1;
    s.name = "Varun";
    cout << s.id << " " << s.name << endl;
    return 0;
}