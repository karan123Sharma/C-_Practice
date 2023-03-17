#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a = 7789;
    vector<int> arr;
    int lastdigit;
    while (a > 0)
    {
        lastdigit = a % 10;
        arr.push_back(lastdigit);
        a=a/10;
    }
    reverse(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        cout<<arr.at(i)<<" ";
    }
}