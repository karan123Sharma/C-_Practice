#include<iostream>
using namespace std;
int main(){
    string str="qwertyhujklp";
    reverse(str.begin(),str.end());
    // int a= 0;
    // int b = str.size()-1;
    // while(a< b){
    //     swap(str[a++],str[b--]);
    // }
    cout<<str;
}