#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string pal;
    cout<<"Enter the string"<<endl;
    cin>>pal;
    bool isPalindrome = false;
    int start =0;
    int len = pal.length()-1;
    while(start<len){
        if(pal[start] != pal[len]){
            isPalindrome = true;
            break;
        }
        start++;
        len--;
    }
    if(isPalindrome){
        cout<<"Not palindrome";
    }
    else{
        cout<<"Palindrome";
    }
}