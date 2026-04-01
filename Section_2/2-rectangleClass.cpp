#include<iostream>
using namespace std;

class Rectangle{
    private:
    int width;
    int height;

    public:
    void setWidth(int w){
        if(w<=0) width =1;
        else width = w;
    }

    void setHeight(int h) {
        if (h <= 0) height = 1; 
        else height = h;
    }

    Rectangle(int w, int h) {
        setWidth(w);
        setHeight(h);
    }

    void display() {
        cout << "2. Rectangle is " << width << " x " << height << "\n\n";
    }
};

void demoRectangle() {
    Rectangle rect(5, 10); 
    rect.display();         
}