#include<iostream>
using namespace std;

int main(){
    float n = 3;
    float res = 0;
    for(int i=1;i<=n;i++){
       float num = 1;
       for(int j=1;j<=i;j++){
        num = num * j;
       }     
       res += i/num; 
    }
    cout<<res;
}