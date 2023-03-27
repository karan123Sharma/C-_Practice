#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t = 901;
    int flag = false;
    if (t < 0)
    {
        t = t * -1;
        flag = true;
    }
    vector<int> arr;
    int lastdigit;
    while (t > 0)
    {
        lastdigit = t % 10;
        arr.push_back(lastdigit);
        t = t % 10;
        t = t / 10;
    }
    if (flag == true)
    {
        arr.insert(arr.begin(),-1);
    }
    for (auto x:arr)
    {
        cout <<x;
    }
}