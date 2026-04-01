#include<iostream>
using namespace std;

class Teacher{
    private:
    string name;
    string subject;

    public:
    Teacher(string name, string subject){
        this->name = name;
        this->subject = subject;
    }

    virtual void displayRole(){
        cout<<"Teacher"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Subject: "<<subject<<endl;
    }
};

class Researcher{
    private:
    string type;
    string researchName;

    public:
    Researcher(string type, string researchName){
        this->type = type;
        this->researchName = researchName;
    }

    virtual void displayRole(){
        cout<<"Researcher"<<endl;
        cout<<"TYpe: "<<type<<endl;
        cout<<"Research name: "<<researchName<<endl;
    }
};

class Professor: public Teacher, public Researcher{
    private:
    int room;
    int number;

    public:
    Professor(string name, string subject, string type, string reserachName, int room, int number):Teacher(name, subject), Researcher(type, reserachName){
        this->room = room;
        this->number = number;
    }

    void displayRole() override{
        Teacher::displayRole();
        Researcher::displayRole();
        cout<<"Professor"<<endl;
        cout<<"Room: "<<room<<endl;
        cout<<"Number: "<<number<<endl;
    }

};

int main(){
    Professor p("Tharun", "Maths", "Own", "Networks", 301, 4);
    p.displayRole();
    return 0;
}