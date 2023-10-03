#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> > res;
void subsets(int index,int arr[],int size,vector<int>&arr1){
    if(index >= size){
        res.push_back(arr1);
        return;
    }
    subsets(index+1,arr,size,arr1);
    arr1.push_back(arr[index]);
    subsets(index+1,arr,size,arr1);
    arr1.pop_back();
}
int main(){
    int arr[6] = {3,2,1,5,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<int>arr1;
    subsets(0,arr,size,arr1);   
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}