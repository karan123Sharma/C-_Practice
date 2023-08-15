#include<iostream>
using namespace std;
void Print_1(int a){
    cout<<"Karan"<<" ";
    if(a == 0){
        return;
    }
    Print_1(--a);
}
int i=1;
void Print_2(int a){
    cout<<i<<" ";
    if(i==a){
        return;
    }
    i++;
    Print_2(a);
}
void Print_3(int a){
    cout<<a<<" ";
    if(a==1){
        return ;
    }
    Print_3(--a);
}

int main(){
// Print_1(5);
//   Print_2(10);
   Print_3(10);
}