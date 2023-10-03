#include<iostream>
using namespace  std;
class A{
    public:
     void func1(){
        cout<<"This is the function of A";
     }
};
class B{
    public:
    void func1(){
        cout<<"This is the function of B";
    }
};
class C : public A,public B {
    
};
int main(){
    C obj1;
    obj1.A::func1();
    cout<<endl;
    obj1.B::func1();
}