#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num;
    cin >> num;
    int arr2[num];
    vector<int> res;
    for (int i = 0; i <= num; i++)
    {
        arr2[i] = arr[i];
        // cout<<arr2[i]<<" ";
    }
    cout << endl;
    for (int i = 1; i <= size; i++)
    {
        if (i == 0)
        {
            arr[i] = arr[i + num];
            res.push_back(arr[i]);
        }
        else
        {
            if (i + num + 1 == size)
            {
                break;
            }
            else
            {
                arr[i] = arr[i + num + 1];
                res.push_back(arr[i]);
            }
        }
    }

    for (int i = 0; i <= num; i++)
    {
        res.push_back(arr2[i]);
    }
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}