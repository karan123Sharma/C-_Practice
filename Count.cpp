#include <iostream>
using namespace std;
int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int arr[10];
        int count = 0, count1 = 0;
        for (int i = 0; i < 10; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < 5; i++)
        {
            if (arr[i] == 0)
            {
                count++;
            }
        }
        for (int i = 5; i <= 10; i++)
        {
            if (arr[i] == 0)
            {
                count1++;
            }
        }
        if (count > count1)
        {
            cout << "1" << endl;
        }
        else if (count < count1)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}
