#include <iostream>
using namespace std;
int main()
{
    string S, K;
    cout<<"Enter the vlid String"<<endl;
    cin >> S;
    K = S;
    bool flag;
    reverse(K.begin(), K.end());
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == K[i])
        {
            flag = true;
            continue;
        }
        else
        {
            break;
            flag = false;
        }
    }
    if(flag==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}