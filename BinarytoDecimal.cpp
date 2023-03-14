#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;
    while (n--)
    {
        int a, count = 0;
        cin >> a;
        string S;
        cin >> S;
        for (int i = 0; i < S.length(); i++)
        {
            for (int j = i+1; j < S.length(); j++)
            {
                if (S[i] == S[j])
                {
                    count++;
                    S[j]='0';
                }
            }
        }
        if (count > 1)
        {
            cout << count << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        count = 0;
    }
}