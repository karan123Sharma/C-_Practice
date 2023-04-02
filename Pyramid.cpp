#include <iostream>
#include <map>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        map<int, int> ump;
        int a;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
	    for(int i=0;i<a;i++){
	     ump[arr[i]]++;
        }
        for(auto i:ump){
            cout<<i.first<<" "<<i.second<<endl;
        }

    }
    return 0;
}
