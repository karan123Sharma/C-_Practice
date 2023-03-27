#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string arr[2] = {"ab", "c"};
    string arr2[2] = {"a", "bc"};
    string str;
    string str2;
    for (int i = 0; i < 2; i++)
    {
        str+=arr[i];
    }
        for (int i = 0; i < 2; i++)
    {
        str2+=arr2[i];
    }
    bool count = true;
    for(int i=0;i<str.size();i++){
        if(str[i]==str2[i]){
            count = true;
        }
        else{
            count = false;
            break;
        }
    }
    if(count == true){
        cout<<count<<endl;
    }
    else if(count == false){
        cout<<count<<endl;
    }

}