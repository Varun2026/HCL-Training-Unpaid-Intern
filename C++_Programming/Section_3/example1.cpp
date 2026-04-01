#include<iostream>
using namespace std;

int main(){
    int *pc, c;
    c = 5;
    cout<<c<<endl;
    pc = &c;
    c=1;
    *pc = 5;
    cout<<c<<endl;
    cout<<*pc<<endl;
}