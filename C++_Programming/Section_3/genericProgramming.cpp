#include<iostream>
using namespace std;
template<typename T1, typename T2>
T2 add(T1 a, T2 b){
    return a+b; //the data type of the parameter returned will be the return type.
}
template<typename T1, typename T2>
T2 mul(T1 a, T2 b){
    return a*b;
}
int main(){
    cout<<add(5.5,6);
    // cout<<(5.5, 6.7);
}