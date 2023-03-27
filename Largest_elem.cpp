#include <iostream>
#include <vector>
#include<set>
using namespace std;
  
int main()
{
    int arr[]={0,0,1,1,1,2,2,3,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    set<int>res;
    for(auto i:arr){
        res.insert(i);
    }
    for(auto i=res.begin();i!=res.end();++i){
        cout<<*i<<" ";
    }

}