#include <iostream>
using namespace std;
int main()
{
    // your code goes here
    string str1 = "aruny";
    string str2 = "fuckboyarun";
    int arr[26];

    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < str1.length(); i++)
    {
        int index = str1[i] - 'a';
        arr[index]++;
    }

    for (int i = 0; i < str2.length(); i++)
    {
        int index = str2[i] - 'a';
        arr[index]--;
    }

    int sum = 0;
    for (int i = 0; i < 26; i++)
    {
        sum = sum + arr[i];
    }

    cout << sum << endl;

    return 0;
}