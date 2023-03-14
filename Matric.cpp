#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int arr[5];
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }
        int min = 0, index;
        for (int i = 0; i < 3; i++)
        {
            if (min > arr[i])
            {
                min = arr[i];
                index = i;
            }
        }

        if (arr[0] + arr[1] + arr[2] <= arr[3])
        {
            cout << "Yes" << endl;
        }
        else if (min < arr[4])
        {
            arr[index] = arr[4];
            cout << index << endl;
            arr[1] = arr[4];
            if (arr[0] + arr[1] + arr[2] <= arr[3])
            {
                cout << "Yes" << endl;
            }
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
