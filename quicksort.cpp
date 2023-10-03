#include<iostream>
using namespace std;
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[],int low,int high){
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low;j<=high-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[j],&arr[i]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return(i+1);
}
void QuickSort(int arr[],int low,int high){
    if(low < high){
        int new1 = partition(arr,low,high);
        QuickSort(arr, low, new1 - 1);
        QuickSort(arr, new1 + 1, high);
    }

}
int main(){
    int arr[10] = {4,1,2,7,9,18,1,6,8,3};
    int N = sizeof(arr)/sizeof(arr[0]);
    // cout<<N<<" ";
    QuickSort(arr,0,N-1);
    for (int i = 0; i < N; i++)
       cout<<arr[i]<<" ";
    return 0;
}