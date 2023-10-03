#include <iostream>
using namespace std;
bool fun(int n, int arr[]){
        int count = 0;
        if (n == 1)
        {
            return true;
        }
        for (int i = 1; i <= n; i++)
        {
            if (arr[i-1] > arr[i])
            {
                cout<<arr[i-1]<<" "<<arr[i]<<endl;
                count++;
                i++;
            }
            cout<<count<<endl;
            if (count > 1)
            {
                return false;
            }
        }
        return false;
}
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool ans = fun(n,arr);
        cout<<ans<<endl;
    }
    return 0;
}