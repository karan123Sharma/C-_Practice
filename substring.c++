#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    string str1,str2,str3;
    cin >> str1 >> str2 >> str3;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 25; j++)
        {
            if (str1[i] == str2[i])
            {
                arr[i] = j;
                break;
            }
            if (str1[i] > 'z')
            {
                str1[i] = 'a';
            }
            str1[i]++;
        }
    }
    str1.clear();
    for (int i = 0; i < a; i++)
    {
        if (str3[i] + arr[i] > 'z')
        {
            str1+=(str3[i] + arr[i] - 'z') + 'a' - 1 ;
        }
        else{
          str1 += str3[i] + arr[i];
        }
        
    }
    cout << str1;
}