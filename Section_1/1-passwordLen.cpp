#include<iostream>
#include<string>
using namespace std;

int main(){
    string password;
    cout<<"Enter the password:"<<endl;
    cin>>password;

    if(password.length() > 8){
        cout<<"Password accepted."<<endl;
    }
    else{
        cout<<"Passwrod not accepted."<<endl;
    }
    return 0;
}