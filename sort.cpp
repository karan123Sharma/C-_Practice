#include<iostream>
using namespace std;
int main(){
    int arr[5] = {3,2,1,41,6};
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            if(arr[i] > arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
 return 0;
}