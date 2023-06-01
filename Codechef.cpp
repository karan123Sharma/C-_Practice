#include <iostream>
using namespace std;

int main()
{
    // int num ;
    // cin>>num;
    // string str;
    // while(num>0){
    //     str+= to_string(num%10);
    //     num = num/10;
    // }
    // num = stoi(str);
    // cout<<num;
    int num ;
    cin>>num;
    for(int i=1;i<=5;i++){
        int k =1;
        for(int j=5;j>i;j--){
            cout<<k;
            k++;
        }
        cout<<endl;
    }
    // cout<<num<<endl;
    // int n = 5;
    // for (int i = 0; i < n; i++)
    // {
    //     if (i % 2 == 0 || i == 0)
    //     {
    //         for (int j = n; j > i; j--)
    //         {
    //             cout << " ";
    //         }
    //         for (int k = 0; k <= i; k++)
    //         {
    //             cout << "* ";
    //         }
    //                 cout << endl;
    //     }
    // }
    // for(int i=0;i<=5;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    return 0;
}
