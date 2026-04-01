#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,2,7,1,3,6,4,2,1,7,7,7,5,5,5,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Duplicates: ";
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }
    // for(int i=0; i<size-1; i++){
    //     for(int j=0; j<=size-i-1; j++){
    //         if(arr[j]>arr[j+1]){
    //             int temp = arr[j+1];
    //             arr[j+1] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }
    // bool flag = true;
    // int i=0;
    // int j = i+1;
    // while(i<size && j<size){
    //     if(arr[i] == arr[j] && flag){
    //         cout<<arr[i]<<" ";
    //         flag = false;
    //         break;
    //     }
    //     else if(arr[i] != arr[j]){
    //         flag = true;
    //         i = j;
    //         j = j+1;
    //     }else{
    //         j=j+1;
    //     }
    // }
    // cout<<endl;
    // for(int i=0; i<size; i++){
    //     cout<<arr[i]<<" ";
    // }
}