#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int>umap;
    string arr[3][2]={{"London","New York"},{"New York","Lima"},{"Lima","Sao Paulo"}};
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            umap[arr[i][0]]++;
            umap[arr[i][1]]--;
        }
        cout<<endl;
    }
    for(auto i:umap){
        cout<<i.first<<" "<<i.second<<endl;
    }

}