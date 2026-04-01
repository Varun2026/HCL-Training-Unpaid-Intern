#include <iostream>
#include <string>
using namespace std;

class Device {
protected:
    string company;
    string type;

public:
    Device(string company, string type) {
        this->company = company;
        this->type = type;
    }
    virtual void showdetails() {
        cout << "Company: " << company << endl;
        cout << "Type: " << type << endl;
    }
};

// Use 'virtual' here to prevent the Diamond Problem
class Phone : virtual public Device {
protected:
    int storage;
    int battery;

public:
    Phone(string company, string type, int storage, int battery) : Device(company, type) {
        this->storage = storage;
        this->battery = battery;
    }
    void showdetails() override {
        cout << "Storage: " << storage << "GB" << endl;
        cout << "Battery: " << battery << "mAh" << endl;
    }
};

// Use 'virtual' here as well
class Camera : virtual public Device {
protected:
    string lens;
    int zoom;

public:
    Camera(string company, string type, string lens, int zoom) : Device(company, type) {
        this->lens = lens;
        this->zoom = zoom;
    }
    void showdetails() override {
        cout << "Lens: " << lens << endl;
        cout << "Zoom: " << zoom << "x" << endl;
    }
};

override class Smartphone : public Phone, public Camera {
private:
    int height;
    int width;

public:
    // In virtual inheritance, the most derived class (Smartphone) 
    // must call the grandparent constructor (Device) directly.
    Smartphone(string company, string type, int storage, int battery, string lens, int zoom, int height, int width)
        : Device(company, type), Phone(company, type, storage, battery), Camera(company, type, lens, zoom) {
        this->height = height;
        this->width = width;
    }

    void showsmartPhone() {
        Device::showdetails(); // Calls the single shared Device copy
        Phone::showdetails();
        Camera::showdetails();
        cout << "Dimensions: " << height << "x" << width << endl;
    }
};

int main() {
    Smartphone myPhone("Samsung", "Smartphone", 256, 5000, "Wide", 10, 160, 75);
    myPhone.showsmartPhone();
    return 0;
}