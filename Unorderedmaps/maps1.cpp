#include<iostream>
#include <map>  
using namespace std;
int main(){
    int arr[]={1,1,2,3,3,4};
    int n= 6;
    map <int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]] = i;
        cout<<arr[i] <<" " <<mp.at(arr[i])<<endl;
    }
    

}