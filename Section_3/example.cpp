#include<iostream>
using namespace std;

float subtract(int a, float b, int c){
    return a-b-c;
}

int main(){
    float (*fn)(int, float, int);
    fn = &subtract;
    cout<<"The output is: "<<(*fn)(2,3.5,4);
}