#include<iostream>
using namespace std;
void BinarySearch(int arr[],int size,int ele){
    int start = 0;
    int end = size;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(ele > arr[mid]){
            start = mid+1;
        }
        else if(ele < arr[mid]){
            end = mid -1;
        }
        else if(ele == arr[mid]){
            cout<<"Element Found with Index :: "<<mid;
            return;
        }
    }
}
void Ascending_Desc(int arr[],int size){
    if(arr[0] > arr[size-1]){
        cout<<"Descending";
    }
    else if(arr[0] < arr[size-1]){
        cout<<"Ascending";
    }
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 16, 7, 8, 9, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ele = 16;
    Ascending_Desc(arr,size);
    // BinarySearch(arr,size,ele);
}