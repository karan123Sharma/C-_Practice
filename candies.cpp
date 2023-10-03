#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    int sum = 1;
    int arr2[a];
    arr2[0] = arr[0]+1;
    for (int i = 1; i < a; i++)
    {
        if(arr[i] + 1 < arr2[i-1]){
          arr2[i] = arr2[i-1]+1;
        }
        else{
            arr2[i] = arr[i]+1;
        }
    }
    int sums= 0;
    for(int i=0;i<a;i++){
        sums = sums + arr2[i] - arr[i];
    }
    cout<<sums;
    return 0;
}