#include<iostream>
using namespace std;

int Binary_search(int arr[],int size,int ele){
    int start = 0;
    int end = size-1;
    while(start<=end){
        int mid = start + ((end -start) /2);
        if(ele==mid){
            return  mid;
        }
        else if(ele < mid){
            start = mid+1;
        }
        else if(ele > mid){
            end = mid-1;
        }
    }
}

int main(){
    int arr[]={20,18,16,14,12,10,8,6,4,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ele =18;
    int ans =Binary_search(arr,size,ele);
    cout<<ans;
}