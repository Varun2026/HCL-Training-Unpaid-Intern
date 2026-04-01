#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter the name:"<<endl;
    //cin>>str;//reads only one word
    getline(cin, str);//reads multiple word
    // cout<<str.length()<<endl;
    int length = 0;
    for(int i=0; str[i]!='\0'; i++){
        length++;
    }
    cout<<length<<endl;
    for(int i=0; str[i] != '\0'; i++){
        if(str[i]>='a' && str[i]<='z'){
            cout<<char(str[i]-32);
        }
        else{
            cout<<str[i];
        }
    }
    return 0;
}