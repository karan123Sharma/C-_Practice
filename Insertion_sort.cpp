#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {6, 5, 3, 2, 1, 8};
    int i = 0;
    for (int k = 0; k < 6; k++)
    {

        for (int j = 0; j < k+1; j++)
        {
            if (arr[j] < arr[])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}