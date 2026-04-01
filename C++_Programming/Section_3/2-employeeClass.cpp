#include<iostream>
using namespace std;

class Employee{
    private:
    string name;
    float salary;

    public:
    Employee(string name, float salary){
        this->name = name;
        this->salary = salary;
    }
    
    string getName(){
        return name;
    }

    float getSalary(){
        return salary;
    }
};

class Manager: Employee{
    private:
    string department;

    public:
    Manager(string name, float salary, string department):Employee(name, salary){
        this->department = department;

    }
    void display(){
        cout<<"Name: "<<getName()<<endl;
        cout<<"Salary: "<<getSalary()<<endl;
        cout<<"Department: "<<department<<endl;
    }
};

int main(){
    Manager m("Varun", 45000.0,"Software Engineer");
    m.display();
}