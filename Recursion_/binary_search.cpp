#include <iostream>
using namespace std;
int BST(int arr[], int target, int start, int end)
{
    if (end > start)
    {
        return 0;
    }
    else
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            cout << mid;
            return 0;
        }
        else if (arr[mid] > target)
        {
            return BST(arr, target, start, mid - 1);
        }
        else if (arr[mid] < target)
        {
            return BST(arr, target, mid + 1, end);
        }
    }

    // return -1;
}
int main()
{
    int arr[6] = {-1, 0, 3, 5, 9, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;
    int start = 0;
    int res = BST(arr, target, start, size - 1);
    // cout<<res;
}