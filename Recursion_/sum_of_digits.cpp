#include<iostream>
using namespace std;

int main(){
    int arr[7]={34,12,90,12,67,90,91};
    string arr2[7];
    for(int i=0;i<7;i++){
        arr2[i]= to_string(arr[i]);
    }
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            string str = arr2[j];
            string str2 = arr2[i];
            if(str[0] < str2[0]){
                swap(arr2[i],arr2[j]);
            }
        }
    }
    for(int i=0;i<7;i++){
        cout<<arr2[i]<<" ";
    }
}