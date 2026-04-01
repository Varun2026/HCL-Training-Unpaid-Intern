#include<iostream>
using namespace std;

int main(){
    // int a =5;
    // printf("%d %d %d", a, a++, ++a);
    char s[] = "hello";
    char *p = s;
    cout<<*p<<endl;
    cout<<&p[0]<<endl;
    p[0] = 'H';
    cout<<s;
}