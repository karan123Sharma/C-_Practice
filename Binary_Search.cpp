#include <iostream>
using namespace std;
int Binary_Search(int arr[], int size, int element)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start + (end -start) / 2;
        if (element > arr[mid])
        {
            start = mid + 1;
        }
        else if (element < arr[mid])
        {
            end = mid - 1;
        }
        else if(element==arr[mid])
        {
            return mid;
        }
        else{
            return -1;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 16, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 16;
    int ans= Binary_Search(arr, size, element);
    cout<<ans;

}