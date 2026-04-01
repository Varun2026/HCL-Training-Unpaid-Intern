#include<iostream>
using namespace std;

class Device{
    protected:
    string company;
    string type;

    public:
    Device(string company, string type){
        this->company = company;
        this->type = type;
    }
    void showdevice(){
        cout<<"Company: "<<company<<endl;
        cout<<"Type: "<<type<<endl;
    }
};

class Mobile: public Device{
    protected:
    int storage;
    int battery;

    public:
    Mobile(string company, string type, int storage, int battery):Device(company, type){
        this->storage = storage;
        this->battery = battery;
    }
    void showMobile(){
        cout<<"Storage: "<<storage<<endl;
        cout<<"Battery: "<<battery<<endl;
    }
};

class Smartphone: public Mobile{
    private:
    int height;
    int width;

    public:
    Smartphone(string company, string type, int storage, int battery, int height, int width):Mobile(company, type, storage, battery){
        this->height = height;
        this->width = width;
    }
    void showsmartPhone(){
        cout<<"Height: "<<height<<endl;
        cout<<"Width: "<<width<<endl;
    }
};

int main(){
    Smartphone sm("Samsung", "17 pro max", 256, 3500, 25, 32);
    sm.showdevice();
    sm.showMobile();
    sm.showsmartPhone();
}