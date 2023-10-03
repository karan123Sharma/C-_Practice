#include<iostream>
using namespace std;
class A{
    public:
     void SayHello(){
        cout<<"Hey Bruh you up"<<endl;
     }
     //if we even change the Data Type still it will be error it wont be overloaded
     void SayHello(string s1){
        cout<<"Hey Bruh you up "<<s1<<endl;
     }
};
int main(){
    A obj1;
    obj1.SayHello("Karan");
}