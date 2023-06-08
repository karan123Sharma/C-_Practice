#include <iostream>
using namespace std;

void lineOfStars(int m)
{
    for (int i = 0; i < m; i++)
    {
        cout << "*";
    }
    cout << endl;
}

void printPattren(int n, int m, int p)
{

    // going row wise
    for (int i = 1; i <= n; i++)
    {
        lineOfStars((p * m) + (m + 1));
        // printing lines
        // lines me slash ka location lagega
        if (i % 2 != 0)
        {
            for (int j = 1; j <= p; j++)
            {

                // printing a line
                for (int k = 1; k <= m; k++)
                {
                    cout << "*";
                    // odd pe real
                    if (k % 2 != 0)
                    {
                        for (int l = 1; l <= p; l++)
                        {
                            if (l == j)
                            {
                                cout << "\\";
                            }
                            else
                            {
                                cout << ".";
                            }
                        }
                    }
                    else
                    {
                        for (int l = p; l >= 1; l--)
                        {

                            if (l == j)
                            {
                                cout << "/";
                            }
                            else
                            {
                                cout << ".";
                            }
                        }
                    }
                }
                cout << "*" << endl;
            }
        }
        else
        {
            for (int j = 1; j <= p; j++)
            {

                // printing a line
                for (int k = 1; k <= m; k++)
                {
                    cout << "*";

                    // odd pe real
                    if (k % 2 != 0)
                    {

                        for (int l = p; l >= 1; l--)
                        {

                            if (l == j)
                            {
                                cout << "/";
                            }
                            else
                            {
                                cout << ".";
                            }
                        }
                    }
                    else
                    {
                        for (int l = 1; l <= p; l++)
                        {
                            if (l == j)
                            {
                                cout << "\\";
                            }
                            else
                            {
                                cout << ".";
                            }
                        }
                    }
                }
                cout << "*" << endl;
            }
        }
    }
    lineOfStars((p * m) + (m + 1));
}

void solve()
{
    int n, m, p;
    cin >> n >> m >> p;
    printPattren(n, m, p);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}