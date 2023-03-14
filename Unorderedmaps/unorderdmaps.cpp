#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        float total = 120 - n;
        int Arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> Arr[i];
            if (Arr[i] == 1)
            {
                count++;
            }
        }
        total += count;
        if (((total / 120)*100) >= 75)
        {
            cout << "Yes" << endl;
            
        }
        else if(((total / 120)*100) < 75)
        {
            cout << "No" << endl;
        }
    }
}
