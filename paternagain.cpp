#include <climits>
#include <iostream>
using namespace std;
int main()
{
    int arr[10]={-5,-6,9,1,2,3,4,-9,-8,10};
    int t = -999;
    int sum =0;
    for(int i=0;i<10;i++){
        if(arr[i] > t){
            t = arr[i]; 
        }
        if(t>0){
            sum+=t;
        }
        
    }
    cout<<sum;
    // for(int i=a;i<b;i++){

    //     if(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0 ){
    //         cout<<i<<" ";
    //     }
    //     else if( i==2 || i==3 || i==5 || i==7){
    //         cout<<i<<" ";
    //     }
    // }
    // for (int i = 1; i <= a; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<j;
    //     }
    //     cout << endl;
    // }
}
