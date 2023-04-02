#include <iostream>
#include <vector>
using namespace std;
// void BinarySearch(int arr[],int size,int ele){
//     int start = 0;
//     int end = size;
//     while(start<=end){
//         int mid = start + (end-start)/2;
//         if(ele > arr[mid]){
//             start = mid+1;
//         }
//         else if(ele < arr[mid]){
//             end = mid -1;
//         }
//         else if(ele == arr[mid]){
//             cout<<"Element Found with Index :: "<<mid;
//             return;
//         }
//     }
// }
// void Ascending_Desc(int arr[],int size){
//     cout<<arr[size-1];
//     if(arr[0] > arr[size-1]){
//         cout<<"Descending";
//     }
//     else if(arr[0] < arr[size-1]){
//         cout<<"Ascending";
//     }
// }
// void First_Occurance(int arr[], int size, int ele)
// {
//     int res = -1;
//     int start = 0;
//     int end = size;
//     while (start <= end)
//     {
//         int mid = start + (end - start)/2;
//         if(ele > arr[mid]){
//             start = mid + 1;
//         }
//         else if(ele < arr[mid]){
//             end = mid - 1;
//         }
//         else if(ele == arr[mid]){
//             res = mid;
//             end = mid -1;
//         }
//         else {
//             return;
//         }
//     }
//     cout<<res;
// }
// void Count_Ele(int arr[], int size, int ele)
// {
//     int start = 0;
//     int end = size;
//     int count = 0;
//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;
//         if (ele > arr[mid])
//         {
//             start = mid + 1;
//         }
//         else if (ele < arr[mid])
//         {
//             end = mid - 1;
//         }
//         else if (ele == arr[mid])
//         {
//             count = mid;
//             start = mid + 1;
//         }
//         else
//         {
//             return;
//         }
//     }
//      start = 0;
//      end = size;
//      int pos =0;
//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;
//         if (ele > arr[mid])
//         {
//             start = mid + 1;
//         }
//         else if (ele < arr[mid])
//         {
//             end = mid - 1;
//         }
//         else if (ele == arr[mid])
//         {
//             pos = mid;
//             end  = mid - 1;
//         }
//         else
//         {
//             return;
//         }
//     }
//     cout << count - pos +1 ;
// }
void Rotate_Array(int arr[],int size){
    int count =0;
    for(int i=0;i<size;i++){
        if(arr[i]<arr[i+1]){
            count++;
        }
        else if(arr[i]>=arr[i+1]){
            break;
        }
    }
    cout<<count;
}
int main()
{
    int arr[] = {11,12,5,18,2,5,6,8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ele = 10;
    // Ascending_Desc(arr,size);
    // BinarySearch(arr,size,ele);
    // First_Occurance(arr, size, ele);
    // Count_Ele(arr, size, ele);
    Rotate_Array(arr,size);
}