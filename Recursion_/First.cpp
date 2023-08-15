#include<iostream>
using namespace std;
void msg(int count){
    cout<<"Hello World"<<endl;
    if(count==5){
        return;
    }
    count++;
    msg(count);
};
int main(){
    int count =0;
    msg(count);
}