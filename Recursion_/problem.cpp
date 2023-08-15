#include<iostream>
using namespace std;
bool Check(int arr[],int index,int len){
    // cout<<index<<" "<<len;
    if(index == len - 1 ){
        return true;
    }
    cout<<arr[index]<<" "<<arr[index +1]<<endl;
    return arr[index] < arr[index + 1] && Check(arr,index+1,len) ;
}
int main(){
    int arr[7]={1,21,31,4,51,71,89};
    int len = sizeof(arr)/sizeof(arr[0]);
    bool res = Check(arr,0,len);
    cout<<res;
}