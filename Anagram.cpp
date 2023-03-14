#include <iostream>
using namespace std;
int main()
{
    string S, K;
    bool flag;
    cin >> S >> K;
    int num = 0;
    for (int i = 0; i < S.length(); i++)
    {
        for (int j = 0; j < S.length(); j++)
        {
            if (S[i] == K[i])
            {
                num++;
                continue;
            }
        }
    }
    if(num == S.length()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}