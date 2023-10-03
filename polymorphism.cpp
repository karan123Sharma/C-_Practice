#include<iostream>
using namespace std;
class A{
    public:
      void Display(){
        cout<<"Hello Im A"<<endl;
      }
};
class B:public A{
    public:
     void Display(){
        cout<<"Hello Im B"<<endl;
     }
};
int main(){
    // A * hello;
    // A B_pointer;
    // B B_der;
    // hello->Display();
    // return 0;
    int a= 235;
    cout<<a%10<<endl;
}