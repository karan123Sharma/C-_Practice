#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
int main(){
    unordered_map<string,int>m ;
    m["Mera"] = 1;
    m["Jaa"] = 2;
    cout<<m["Mera"]<<endl;
    unordered_map<string,int> :: iterator It = m.begin();
    while(It != m.end()){
        cout<< It->first<<" " << It->second <<endl;
        It++;
    }
}