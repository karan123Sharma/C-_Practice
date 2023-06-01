#include<iostream>
#include<vector>
using namespace std;
int main(){
    int numRows = 5;
    vector<vector<int> > num;
    for(int i=0;i<numRows;i++){
        for(int j=0;j<num[0].size();j++){
            num[j].push_back(0);
            cout<<num[i][j];
        }
    }
    // for(int i=0;i<numRows;i++){
    //     for(int j=0;j<num[0].size();j++){
    //        cout<<num[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}