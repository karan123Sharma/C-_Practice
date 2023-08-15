#include<iostream>
using namespace std;
void number(int num){
    cout<<"The given Number is: "<<num<<endl;
    if(num ==0){
        return;
    }
    number(num-1);
};
int Product(int num){
    if(num <= 1){
        return 1;
    }
    return num * Product(num-1);
}
int main(){
    int res = Product(5);
    cout<<res;
}