#include<iostream>
using namespace std;
int main(){
    int arr[5]={4,1,7,2,6};
    int num = 6;
    int i=0;
    while(arr[i]!= num){
        i++;
        if(arr[i]== num){
            cout<<"Founded : "<<i<<endl;
            break;
        }
        cout<<"Searching : "<<i<<endl;
    }
}