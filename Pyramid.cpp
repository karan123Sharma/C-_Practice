#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, count = 0;
        cin >> a;
        int arr[a];
        bool flag = false;
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < a; i++)
        {
            if ((arr[i + 1] != arr[i - 1]) && (i != 0 || i != a - 1))
            {
                count++;
            }
        }
        if (count != 0)
        {
            cout << count << endl;
        }
        else
        {
            cout << count << endl;
        }
    }
    return 0;
}