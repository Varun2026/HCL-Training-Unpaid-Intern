#include<iostream>
using namespace std;

namespace Classes{
    class Student{
        private:
        int roll;
        string name;

        public:
        Student(int r, string n){
            roll = r;
            name = n;
        }
        void print(){
            cout<<"Roll: "<<roll<<endl;
            cout<<"Name: "<<name<<endl;
        }
    };
}
using namespace Classes;
int main(){
    Student s(311, "Varun");
    s.print();
}